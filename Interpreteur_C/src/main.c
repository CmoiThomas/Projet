#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *read_file_contents(const char *filename);

int main(int argc, char *argv[]) {
  // Disable output buffering
  setbuf(stdout, NULL);
  setbuf(stderr, NULL);

  if (argc < 3) {
    fprintf(stderr, "Usage: ./your_program tokenize <filename>\n");
    return 1;
  }

  const char *command = argv[1];

  if (strcmp(command, "tokenize") == 0) {
    // You can use print statements as follows for debugging, they'll be visible
    // when running tests.
    fprintf(stderr, "Logs from your program will appear here!\n");
    char *file_contents = read_file_contents(argv[2]);

    //Variable initialization
    int length = strlen(file_contents);
    int error = 0;
    int line_count = 1;
    char string_literal[1000];
    char number_literal[1000] = "";
    float floatnumber_literal;
    int is_float = 0;

    if (length > 0) {
      for (int i = 0; i < length; i++) {
        switch (file_contents[i]) {
          case '(':
            printf("LEFT_PAREN ( null\n");
            break;
          case ')':
            printf("RIGHT_PAREN ) null\n");
            break;
          case '{':
            printf("LEFT_BRACE { null\n");
            break;
          case '}':
            printf("RIGHT_BRACE } null\n");
            break;
          case ',':
            printf("COMMA , null\n");
            break;
          case '.':
            printf("DOT . null\n");
            break;
          case '-':
            printf("MINUS - null\n");
            break;
          case '+':
            printf("PLUS + null\n");
            break;
          case ';':
            printf("SEMICOLON ; null\n");
            break;
          case '*':
            printf("STAR * null\n");
            break;
          case '=':                                                 //case = and ==
            if (i + 1 < length && file_contents[i + 1] == '=') {
              printf("EQUAL_EQUAL == null\n");
              i++;
            } else {
              printf("EQUAL = null\n");
            }
            break;
          case '!':                                                 //case ! and !=
            if (i + 1 < length && file_contents[i + 1] == '=') {
              printf("BANG_EQUAL != null\n");
              i++;
            } else {
              printf("BANG ! null\n");
            }
            break;
          case '<':                                                 //case < and <=
            if (i + 1 < length && file_contents[i + 1] == '=') {
              printf("LESS_EQUAL <= null\n");
              i++;
            } else {
              printf("LESS < null\n");
            }
            break;
          case '>':                                                //case > and >=
            if (i + 1 < length && file_contents[i + 1] == '=') {
              printf("GREATER_EQUAL >= null\n");
              i++;
            } else {
              printf("GREATER > null\n");
            }
            break;
          case '/':                                                //case / and //
            if (i + 1 < length && file_contents[i + 1] == '/') {
              while(i < length && file_contents[i] != '\n')
                i++;
              line_count++;  
            } else {
              printf("SLASH / null\n");
            }
            break;
          case ' ':
          case '\t':
            break;
          case '\n':
            line_count++;
            break;
          case '"':                                                //case of string literals
              i++;
              while(i < length && file_contents[i] != '"'){
                if (file_contents[i+1] == '\0') {                  //case of unterminated string
                  fprintf(stderr, "[line %d] Error: Unterminated string.\n", line_count);
                  error=1;
                  string_literal[0]='\0';                          //Reinitialize the list for future literals
                  break;
                } else {                                           //case of terminated string
                  strcat(string_literal, (char[]){file_contents[i], '\0'});  //add to string_literal without "
                  i++;
                }
              }
              if (error!=1) {
                printf ("STRING \"%s\" %s\n", string_literal, string_literal);
                string_literal[0]='\0';                                        //Reinitialize the list for future literals
              }
            break;
          default:
            if (isdigit(file_contents[i]) != 0) {              //case of number literals
              while(i < length && (isdigit(file_contents[i]) != 0 || file_contents[i] == '.')){
                if (file_contents[i] == '.') {
                  strcat(number_literal, ".");                 //add the . operator to the float
                  is_float=1;
                } else {
                strcat(number_literal, (char[]){file_contents[i], '\0'});  //add to number_literal
                }
                i++;
              }
            if (is_float==0) {
              floatnumber_literal = atof(number_literal);
              printf ("NUMBER %s %.1f\n", number_literal, floatnumber_literal);
            }
            else {
              printf ("NUMBER %s %s\n", number_literal, number_literal);
              is_float=0;
            }
            number_literal[0]='\0';                                        //Reinitialize the list for future literals
            } else {                                         //case of errors
              fprintf(stderr, "[line %d] Error: Unexpected character: %c\n", line_count, file_contents[i]);
              error = 1;
            }
        }
      }
    }
  
    printf("EOF  null\n"); // Placeholder, remove this line when implementing
                           // the scanner
    free(file_contents);

    //Error test
    if (error == 1) {
        exit(65);
      } else {
        exit(0);
      }

  } else {
    fprintf(stderr, "Unknown command: %s\n", command);
    return 1;
  }
  return 0;
}


char *read_file_contents(const char *filename) {
  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    fprintf(stderr, "Error reading file: %s\n", filename);
    return NULL;
  }
  fseek(file, 0, SEEK_END);
  long file_size = ftell(file);
  rewind(file);
  char *file_contents = malloc(file_size + 1);
  if (file_contents == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    fclose(file);
    return NULL;
  }
  size_t bytes_read = fread(file_contents, 1, file_size, file);
  if (bytes_read < file_size) {
    fprintf(stderr, "Error reading file contents\n");
    free(file_contents);
    fclose(file);
    return NULL;
  }
  file_contents[file_size] = '\0';
  fclose(file);
  return file_contents;
}