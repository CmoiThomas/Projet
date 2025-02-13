# Compte rendu SAE Python
CHAMPAVERT Thomas G1a

## 1) Introduction
Le premier exercice consiste simplement à afficher un message avec le shell:

```py
print("helloworld")
```

on obtient ceci dans le shell:

```py
helloworld
```

On éxécute ensuite directement dans le shell les exemples suivants

```py
2
18
hello world
```

## 2) Variable

### Chiffre de Friedman
On cherche à determiné si les chiffres suivants sojt des chiffres de Friedman

```py
a=7+3**6
b=(3+4)**3
c=(3**6)-5
d=(1+2**8)*5
e=(2+1**9)**7
print("",a,b,c,d,e)
```

on obtient:

```py
736 343 724 1285 2187
```

On en déduit que c) et e) ne sont pas des chiffres de Friedman.

### Prédire le résultat : opérations

On réalise le code suivant:

```py
a=(1+2)**3          #27
b="Da" * 4          #DaDaDaDa
c="Da" + 3          #Da+3
d=("Pa"+"La") * 2   #PaLaPaLa
e=("Da"*4) / 2      #DaDa
f=5 / 2             #2.5
g=5 // 2            #2
h=5 % 2             #1
print("",a,b,c,d,e,f,g,h)
```

On obtient les résultats suivants:

On remarque que le c) et le e) ne fonctionne pas il s'agit d'objets différent.

pour le reste, les résultats sont presque comme attendus:

```py
 27 DaDaDaDa PaLaPaLa 2.5 2 1
```

### Prédire le résultat : opérations et conversions de types


```py
a=str(4) * int("3")        #444
b=int("3") + float("3.2")  #6.2
c=str(3) * float("3.2")    #erreur
d=str(3/4) * 2             #3/43/4
print("",a,b,c,d)
```

comme prévu le cas c) est bien une erreur, car on réalise une multiplication entre un float et autre chose qu'un ineger.

Pour les cas a), b) et d), on obtient ceci:

```py
 444 6.2 0.750.75
```

le cas b) était bien prévu cependant dans le cas d), le résultat est d'abord "converti" en décimal et non laissé en fraction.

## 3) Affichage

### Affichage dans l’interpréteur et dans un programme

Lorsque l'on tape 1+1 dans le shell le résultat apparait immédiatement.

lorsque l'on tape 1+1 dans le prompt, puis que l'on éxécute le fichier, il ne se passe rien dans le shell.

Pour pouvoir afficher quelque chose dans le shell, il faut éxécuter la fonction "print" comme ceci:

```py
print (1+1)
```

Il s'affiche ceci sur le shell:

```py
2
```

### Poly-A

Il suffit simplement d'éxécuter la fonction suivante:

```py
print ("A"*20)
```

On obtient bien le résultat attendu:
```py
AAAAAAAAAAAAAAAAAAAA
```

### Poly-A et poly-GC

Il faut faire la même chose que précédement:

```py
print ("A"*20+"GC"*20)
```

On obtient:

```py
AAAAAAAAAAAAAAAAAAAAGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGC
```

### Ecriture formatée

On réalise le programme suivant:

```py
a="salut"
b=102
c=10.318

print(f"{a} {b} {c:.2f}")
```

On obtient:

```py
salut 102 10.31
```

### Écriture formatée 2

On réalise la fonction suivante:

```py
perc_GC = ((4500 + 2575)/14800)*100
print(f"Le pourcentage de GC est {perc_GC:<7.0f} %")
print(f"Le pourcentage de GC est {perc_GC:<7.1f} %")
print(f"Le pourcentage de GC est {perc_GC:<7.2f} %")
print(f"Le pourcentage de GC est {perc_GC:<7.3f} %")
```

On obtient bien le résultat attendu:

```py
Le pourcentage de GC est 48      %
Le pourcentage de GC est 47.8    %
Le pourcentage de GC est 47.80   %
Le pourcentage de GC est 47.804  %
```

## 4) Liste

### Jours de la semaine

On crée pui affiche une liste comme ceci: 

```py
jours=["lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"]
print(jours[0:5])
print(jours[5:7])
```

on obtient:

```py
['lundi', 'mardi', 'mercredi', 'jeudi', 'vendredi']
['samedi', 'dimanche']
```

On peut aussi le faire de la manière suivante:

```py
a=["lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"]
print(a[-7])
print(a[-6])
print(a[-5])
print(a[-4])
print(a[-3])
```

On obtient la même chose.

pour accéder au dernier jour de la semaine de 2 manières différentes:

```py
a=["lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"]
print(a[6])
print(a[-1])
```

De plus pour inverser la liste en une seule commande:

```py
a=["lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"]
b=[a[6],a[5],a[4],a[3],a[2],a[1],a[0]]
print(b)
```

on obtient:

```py
['dimanche', 'samedi', 'vendredi', 'jeudi', 'mercredi', 'mardi', 'lundi']
```

### Saisons

`saisons[2]` retournera "printemps"
`saisons[1][0]` retournera "janvier"
`saisons[1:2]` retournera "avril,mai,juin"
`saisons[:][1]` retournera "avril,mai,juin" car [:] appelle toutes les éléments présent dans la liste.

Tout les éléments attendus sont bien retrouvé quand on test.

### Table de multiplication par 9

On réalise la fonction suivante:

```py
print(list(range(0,100,9)))
```

on obtient:

```py
[0, 9, 18, 27, 36, 45, 54, 63, 72, 81, 90, 99]
```

### Nombres pairs

On réalise la fonction suivante:

```py
print(len(range(2,10000,2)))
```

on obtient:

```py
4999
```

Le résultat est bon.

## 5)Boucles et comparaisons

### Boucles de base

1ère manière de faire le programme(avec un for):

```py
a=["vache", "souris", "levure", "bacterie"]
for i in range(len(a)):
    print(a[i])
    i=i+1
```

2ème manière de faire le programme(avec un for):

```py
a=["vache", "souris", "levure", "bacterie"]
for i in range(-len(a),0,1):
    print(a[i])
    i=i+1
```

3ème manière de faire le programme(avec un while):

```py
a=["vache", "souris", "levure", "bacterie"]
i=0
while i<4:
    print(a[i])
    i=i+1
```

à chaque fois on obtient:

```py
vache
souris
levure
bacterie
```

### Boucle et jours de la semaine

1ère manière de faire le programme(avec un for):

```py
semaine=["lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"]
for i in range(len(semaine)):
    print(semaine[i])
    i=i+1
```

On obtient bien les jours de la semaine.

2ème manière de faire le programme(avec un while):

```py
semaine=["lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"]
i=-1
while i>-3:
    print(semaine[i])
    i=i-1
```

On obtient:

```py
dimanche
samedi
```

### Nombres de 1 à 10 sur une ligne

On réalise le code suivant:

```py
for i in range (11):
    print(f"{i} ",end="")
```

On obtient:

```py
0 1 2 3 4 5 6 7 8 9 10
```

### Nombres pairs et impairs

On réalise le programme suivant:

```py
a=[1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21]
for i in range(len(a)):
    a[i]=a[i]+1
    i=i+1
print(a)
```

On obtient:
```py
[2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22]
```

### Calcul de la moyenne

On réalise le programme suivant:
```py
b=0
a=[14, 9, 6, 8, 12]
for i in range(len(a)):
    b=b+a[i]
    i=i+1
b=b/len(a)
print(f"La moyenne est de:{b:.2f}")
```

On obtient:
```py
La moyenne est de: 9.80
```

### Produit de nombres consécutifs

On réalise le programme suivant:
```py
a=list(range(2,21,2))
for i in range(len(a)-1):
    print(a[i]*a[i+1])
    i=i+1
```

On obtient:
```py
8
24
48
80
120
168
224
288
360
```

### Triangle

On réalise le programme suivant:
```py
for i in range(11):
    print("*"*i)
```

On obtient:
```py
*
**
***
****
*****
******
*******
********
*********
**********
```

### Triangle inversé

On réalise le programme suivant:
```py
for i in range(11):
    print("*"*(11-i))
    i=i+1
```

On obtient:
```py
***********
**********
*********
********
*******
******
*****
****
***
**
*
```

### Triangle gauche

On réalise le programme suivant:
```py
for i in range(11):
    print(f"{"*"*i:>10s}")
```

On obtient:
```py
          *
         **
        ***
       ****
      *****
     ******
    *******
   ********
  *********
 **********
```

### Pyramide

On réalise le programme suivant:
```py
for i in range(11):
    print(" "*(11-i),end='')
    print(("*"*(2*i))+"*")
    i=i+1
```

On obtient:
```py
           *
          ***
         *****
        *******
       *********
      ***********
     *************
    ***************
   *****************
  *******************
 *********************
```

En rajoutant les lignes donné dans l'énoncé on modifie le code:

```py
reponse = input (" Entrez un nombre de lignes ( entier positif ): ")
N = int ( reponse )

for i in range(N):
    print(" "*(N-i),end='')
    print(("*"*(2*i))+"*")
```

On peut maintenant sélectionner le nombre de ligne souhaité.

### Parcours de matrice

On réalise le programme suivant:

```py
#nombre de ligne de la matrice
a=2
#nombre de colonne de la matrice
b=2

print(f"{'ligne':^6} {'colonne':^8}")
for i in range (a):
    for j in range(b):
        print(f"{i+1:^6} {j+1:^8}")
```

On obtient:

```py
ligne  colonne
  1       3
  1       4
  2       3
  2       4
```

avec une matrice 5x5:

```py
#nombre de ligne de la matrice
a=5
#nombre de colonne de la matrice
b=5

print(f"{'ligne':^6} {'colonne':^8}")
for i in range (a):
    for j in range(b):
        print(f"{i+1:^6} {j+1:^8}")
```

On obtient:

```py
ligne  colonne
  1       1
  1       2
  1       3
  1       4
  1       5
  2       1
  2       2
  2       3
  2       4
  2       5
  3       1
  3       2
  3       3
  3       4
  3       5
  4       1
  4       2
  4       3
  4       4
  4       5
  5       1
  5       2
  5       3
  5       4
  5       5
```

Avec des while:

```py
#nombre de ligne de la matrice
a=2
#nombre de colonne de la matrice
b=2

i=0
j=0
print(f"{'ligne':^6} {'colonne':^8}")
while i<a:
    while j<b:
        print(f"{i+1:^6} {j+1:^8}")
        j=j+1
    j=0
    i=i+1
```

On obtient:

```py
ligne  colonne
  1       3
  1       4
  2       3
  2       4
```

Cette méthode fonctionne aussi avec des matrices 5x5

### Parcours de demi-matrice sans la diagonale (exercice ++)

On réalise le programme suivant:

```py
#nombre de ligne de la matrice
a=4
#nombre de colonne de la matrice
b=4

print(f"{'ligne':^6} {'colonne':^8}")
for i in range (a):
    for j in range(b):
        if(i<j):
            print(f"{i+1:^6} {j+1:^8}")
```

On obtient:

```py
ligne  colonne
  2       1
  3       1
  3       2
  4       1
  4       2
  4       3
```

On remarque que le programme fonctionne pour toute taille de matrice.

On réalise ensuite le programme suivant:

```py
#nombre de ligne de la matrice
a=4
#nombre de colonne de la matrice
b=4

c=0
#print(f"{'ligne':^6} {'colonne':^8}")
for i in range (a):
    for j in range(b):
        c=c+1
        if(i<j):
            print(f"taille de la matrice:{a} nombre de case:{c}")
```

On obtient:

```py
taille de la matrice:4 nombre de case:2
taille de la matrice:4 nombre de case:3
taille de la matrice:4 nombre de case:4
taille de la matrice:4 nombre de case:7
taille de la matrice:4 nombre de case:8
taille de la matrice:4 nombre de case:12
```

Le programme fonctionne pour toute taille de la matrice.

On remarque une forme de périodicité dans les résultats:

si N pair = N+N/2
Si N impair = 2*N

### Sauts de puce

On réalise le programme suivant:

```py
import random

n=0 #nombre de saut
fin=5 #nombre de saut final
i=0

while(i!=fin):
    n=n+1
    i=i+random.choice([-1,1])
print(f"nombre de saut:{n}")
```

On obtient:

```py
nombre de saut:2229
PS D:\SAE\SAE_Python\code> python temp.py
nombre de saut:25
PS D:\SAE\SAE_Python\code> python temp.py
nombre de saut:409
PS D:\SAE\SAE_Python\code> python temp.py
nombre de saut:15
PS D:\SAE\SAE_Python\code> python temp.py
nombre de saut:1729
PS D:\SAE\SAE_Python\code> python temp.py
nombre de saut:19
```

On remarque que le nombre de saut n'est jamais le même, ce qui est normal puisque la puce saute aussi dans les négatifs.

### Suite de Fibonacci (exercice +++)

On réalise le programme suivant:

```py
fibbo=[0,1]

fin=15 #taille de la suite

for i in range(2,fin):
    x=fibbo[i-1]+fibbo[i-2]
    fibbo=fibbo+[x]
print(fibbo)
```

On obtient:

```py
[0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377]
```

On modifie le programme précédent:

```py
fibbo=[0,1]
rapport_fibbo=[0,1]

fin=15 #taille de la suite

for i in range(2,fin):
    x=fibbo[i-1]+fibbo[i-2]
    fibbo=fibbo+[x]
    rapport_fibbo=rapport_fibbo+[fibbo[i]/fibbo[i-1]]

print(fibbo)
print(rapport_fibbo)
```

On obtient:

```py
[0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377]
[0, 1, 1.0, 2.0, 1.5, 1.6666666666666667, 1.6, 1.625, 1.6153846153846154, 1.619047619047619, 1.6176470588235294, 1.6181818181818182, 1.6179775280898876, 1.6180555555555556, 1.6180257510729614]
```

On remarque que le résultat tant vers le nombre d'or phi=1.618

## 6)Tests

### Jours de la semaine

On réalise le programme suivant:

```py
semaine=["lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"]

for jours in semaine:
    if jours == "lundi" or jours == "mardi" or jours == "mercredi" or jours == "jeudi":
        print("Au travail")
    if jours == "vendredi":
        print("Chouette c'est vendredi")
    elif jours == "samedi" or jours == "dimanche":
        print("Repos ce week-end")
```

On obtient:

```py
Au travail
Au travail
Au travail
Au travail
Chouette c'est vendredi
Repos ce week-end
Repos ce week-end
```

### Séquence complémentaire d’un brin d’ADN

On réalise le programme suivant:

```py
sequence=["A", "C", "G", "T", "T", "A", "G", "C", "T", "A", "A", "C", "G"]
sequence_complementaire=[]

for truc in sequence:
    if truc=="A":
        sequence_complementaire=sequence_complementaire+["T"]
    if truc=="T":
        sequence_complementaire=sequence_complementaire+["A"]
    if truc=="C":
        sequence_complementaire=sequence_complementaire+["G"]
    if truc=="G":
        sequence_complementaire=sequence_complementaire+["C"]
print(sequence_complementaire)
```

On obtient:

```py
['T', 'G', 'C', 'A', 'A', 'T', 'C', 'G', 'A', 'T', 'T', 'G', 'C']
```

### Minimum d’une liste

On réalise le programme suivant:

```py
liste=[8,4,6,1,5]

a=liste[0]
for i in range(len(liste)):
    if liste[i]<a:
        a=liste[i]
print(f"le plus petit nombre est:{a}")
```

On obtient:

```py
le plus petit nombre est:1
```

### Fréquence des acides aminés

On réalise le programme suivant:

```py
liste=["A","R","A","W","W","A","W","A","R","W","W","R","A","G"]

a=0
r=0
w=0
g=0
for i in liste:
    if i=="A":
        a=a+1
    elif i=="R":
        r=r+1
    elif i=="W":
        w=w+1
    elif i=="G":
        g=g+1

print(f"fréquence A:{a/len(liste):0.2f}")
print(f"fréquence R:{r/len(liste):0.2f}")
print(f"fréquence W:{w/len(liste):0.2f}")
print(f"fréquence G:{g/len(liste):0.2f}")
```

On obtient:

```py
fréquence A:0.36
fréquence R:0.21
fréquence W:0.36
fréquence G:0.07
```

### Notes et mention d’un étudiant

On réalise le programme suivant:

```py
liste=[14,9,13,15,12]

moyenne=sum(liste)/len(liste)
print(f"note max:{max(liste)}")
print(f"note min:{min(liste)}")
print(f"moyenne:{moyenne:0.2f}")

if 10<moyenne and moyenne<12:
    print("mention passable")
elif 12<moyenne and moyenne<14:
    print("mention assez bien")
elif 14<moyenne:
    print("mention bien")
```

On obtient:

```py
note max:15
note min:9
moyenne:12.60
mention assez bien
```

### Nombres pairs

On réalise le programme suivant:

```py
liste=list(range(21))

liste_pair=[]
liste_impair=[]
for i in liste:
    if i%2==0 and i<10:
        liste_pair=liste_pair+[i]
    elif i%2!=0 and i>10:
        liste_impair=liste_impair+[i]
print(liste_pair)
print(liste_impair)
```

On obtient:

```py
[0, 2, 4, 6, 8]
[11, 13, 15, 17, 19]
```

### Conjecture de Syracuse (exercice+++)

On réalise le programme suivant:

```py
reponse = input (" Entrez un nombre de lignes ( entier positif ): ")
N = int ( reponse )

liste=[N]
n=101 #nombre d'itération

for i in range(n):
    if liste[i]%2==0:
        liste=liste+[int(liste[i]/2)]
    elif liste[i]%2!=0:
        liste=liste+[(3*liste[i])+1]
print(liste)
```

On obtient pour N=10:

```py
[10, 5, 16, 8, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2, 1, 4, 2]
```

On remarque que au bout d'un certain nombre d'itération, il y a une suite de 4,2,1.

La conjecture de syracuse semble se vérifié pour n'importe quel N.

Le cycle trivial est 4,2,1.

### Attribution de la structure secondaire des acides aminés d’une protéine (exercice+++)

On réalise le programme suivant:

```py
liste=[[48.6, 53.4],[-124.9, 156.7],[-66.2,-30.8],[-58.8,-43.1],[-73.9,-40.6],[-53.7,-37.5],[-80.6,-26.0],[-68.5, 135.0],[-64.9,-23.5],[-66.9,-45.5],[-69.6,-41.0],[-62.7,-37.5],[-68.2,-38.3],[-61.2,-49.1],[-59.7,-41.1]]

for i in range(len(liste)):
    if liste [i][0]-57<=30 and liste [i][1]-57<30:
        print(f"{liste[i]}est en hélice")
    else:
        print(f"{liste[i]} n'est pas en hélice")
```

On obtient:

```py
[48.6, 53.4] n'est pas en hélice
[-124.9, 156.7] n'est pas en hélice
[-66.2, -30.8]est en hélice
[-58.8, -43.1]est en hélice
[-73.9, -40.6]est en hélice
[-53.7, -37.5]est en hélice
[-80.6, -26.0]est en hélice
[-68.5, 135.0] n'est pas en hélice
[-64.9, -23.5]est en hélice
[-66.9, -45.5]est en hélice
[-69.6, -41.0]est en hélice
[-62.7, -37.5]est en hélice
[-68.2, -38.3]est en hélice
[-61.2, -49.1]est en hélice
[-59.7, -41.1]est en hélice
```

### Détermination des nombres premiers inférieurs à 100 (exercice+++)

On réalise le programme suivant:

```py
liste = [2]

for i in range(3, 101):
    for j in liste:
        if i % j == 0:
            break
    else:
        liste=liste+[i]
print(liste)
```

On obtient:

```py
[2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
```



## 7)Fichiers

### Moyenne des notes

On réalise le programme suivant:

```py
liste=[]

with open ("notes.txt","r") as filin :
    for i in filin :
        liste=liste+[float(i)]
print(f"la moyenne est:{sum(liste)/len(liste):.2f}")
```

On obtient:

```py
la moyenne est: 13.38
``` 

### Admis ou recalé

On réalise le programme suivant:

```py
liste=[]

with open ("notes2.txt" , "r") as fichier1 , open ("notes3.txt" , "w") as fichier2 :
    for i in fichier1 :
        if float(i)>=10:
            fichier2 . write (f"{float(i):.2f}:admis\n")
        elif float(i)<10:
            fichier2 . write (f"{float(i):.2f}:recalé\n")
```

On obtient:

```py
13.50:admis
17.00:admis
9.50:recalé
12.00:admis
14.00:admis
6.00:recalé
5.50:recalé
8.50:recalé
10.50:admis
29.00:admis
14.00:admis
9.00:recalé
15.50:admis
11.50:admis
16.00:admis
18.00:admis
13.00:admis
12.50:admis
15.50:admis
17.00:admis
``` 

Ce programme ne fonctionnerai peut être pas si une note est égal à 10, à cause des approximations sur les float et des conditions des if.

### Spirale (exercice +++)

On réalise le programme suivant:

```py
import math
import matplotlib.pyplot as plt

r=0.5
t=0

with open ("spirale.txt","w") as spiral:
    while t<=(4*math.pi)+0.1:
        spiral.write(f"{math.cos(t)*r:.5f} {math.sin(t)*r:.5f}\n")
        r=r+0.1
        t=t+0.1


x = []
y = []
with open ("spirale.txt", "r") as f_in :
    for line in f_in :
        coords = line . split ()
        x. append ( float ( coords [0]))
        y. append ( float ( coords [1]))

plt . figure ( figsize =(8 ,8))
mini = min (x+y) * 1.2
maxi = max (x+y) * 1.2
plt . xlim (mini , maxi )
plt . ylim (mini , maxi )
plt . plot (x, y)
plt . savefig ("spirale.png")
```

## 8)Modules

### Racine carrée

On réalise le programme suivant:

```py
import math

for i in range (10,21):
    print(f"{i} {math.sqrt(i):.3f}")
```

### Cosinus

On réalise le programme suivant:

```py
import math

print(f"{math.cos(math.pi/2):.2f}")
```

### Nom et contenu du répertoire courant

On réalise le programme suivant:

```py
import os

print(os.getcwd())
print(len(os.listdir()))
```

### Affichage temporisé

On réalise le programme suivant:

```py
import time

for i in range (1,11):
    print(i)
    time.sleep(1)
```

### Séquences aléatoires de chiffres

On réalise le programme suivant:

```py
import random

liste=[]
for i in range (6):
    liste.append(random.randint(1,4))
print(liste)
```

### Séquences aléatoires d'ADN

On réalise le programme suivant:

```py
import random

seq=["A","T","G","C"]
liste=[]
for i in range (20):
    liste.append(random.choice(seq))
print(liste)
```

### Séquences aléatoires d'ADN avec argument

On réalise le programme suivant avec comme argument 10:

```py
import sys
import random

seq=["A","T","G","C"]
liste=[]

for i in range (int(sys.argv[1])):
    liste.append(random.choice(seq))
print(liste)
```

### Compteur de lignes

On réalise le programme suivant:

```py
import sys
import os

if len (sys.argv) != 2:
    sys . exit (" ERREUR : il faut exactement un argument .")

if os.path.exists(sys.argv[1]):
    nom_fichier = sys.argv [1]
    taille = 0
    with open (nom_fichier,"r") as f_in :
        taille = len (f_in.readlines())
    print (f"{nom_fichier} contient {taille} lignes.")
else:
    sys.exit ("le fichier est absent")
```

### Détermination du nombre pi par la méthode Monte Carlo (exercice +++)

On réalise le programme suivant:

```py
import random
import math

N=10000 #nombres d'itérations
n=0

for i in range (N):
    x=random.uniform(-1,1)
    y=random.uniform(-1,1)
    distance_centre=math.sqrt((x**2)+(y**2))
    if distance_centre<=1:
        n=n+1

print(4*n/N)
```

## 8)Fonctions

### Puissance

On réalise le programme suivant:

```py
def calc_puissance(x,y):
    return x**y

for i in range (21):
    print(f"2^{i:>2} = {calc_puissance(2,i):>7}")
```

### Pyramide

On réalise le programme suivant:

```py
def pyramide(n):
    for i in range(n):
        print(" "*(n-i),end='')
        print(("*"*(2*i))+"*")

reponse = input (" Entrez un nombre de lignes ( entier positif ): ")
N = int ( reponse )

pyramide(N)
```

### Nombres premiers

On réalise le programme suivant:

```py
def est_premier(n):
    liste = [2]

    for i in range(3, 101):
        for j in liste:
            if i%j == 0:
                break
        else:
            liste.append(i)
    for k in liste:
        if k==n:
            return True

for i in range(2,101):
    if est_premier(i)==True:
        print(f"{i:>3} est premier")
    else:
        print(f"{i:>3} n'est pas premier")
```

### Séquences complémentaire

On réalise le programme suivant:

```py
def seq_comp(seq):
    liste=[]
    for i in range(len(seq)):
        if seq[i]=="A":
            liste.append("T")
        elif seq[i]=="T":
            liste.append("A")
        elif seq[i]=="G":
            liste.append("C")
        else:
            liste.append("G")
    return liste

seq=["A", "T", "C", "G", "A", "T", "C", "G","A", "T", "C"]
print(seq_comp(seq))
```

### distance 3D

On réalise le programme suivant:

```py
import math

def calc_dist(a,b):
    return math.sqrt((B[0]-A[0])**2+((B[1]-A[1]))**2+(B[2]-A[2])**2)

A=[0,0,0]
B=[1,1,1]
print(calc_dist(A,B))
```

### distribution et statistiques

On réalise le programme suivant:

```py
import random

def gen_distrib(debut,fin,n):
    liste=[]
    for i in range(n):
        liste.append(random.uniform(debut,fin))
    return liste

def calc_stat(liste2):
    return min(liste2),max(liste2),(sum(liste2)/len(liste2))

for i in range(1,21):
    liste_x=gen_distrib(0,100,20)
    mini,maxi,avg=calc_stat(liste_x)
    print(f"liste {i:>2}: min={mini:0.2f}; max={maxi:0.2f}; moyenne={avg:0.2f}")
```

## Oscilloscope

### Question 3.1.1

Il y a 2 interfaces de communication: USB et RS232.

l'interface USB nécessite d'installer une bibliothèque à l'aide d'un CD, CD que nous n'avons pas à disposition. De plus rien n'est préciser sur le protocole de communication.

Pour l'interface RS232, on sait que le protocole est une liaison série qui suit cette configuration:

Baud Rate 19200
Start bit 1
Stop bit 1
Data bits 7
Parity Odd

### Question 3.1.2

on associe les photos aux vues indiqués dans le sujet:

Photo du Top du PCB principal: photo 3
Photo du Bottom du PCB principal: photo 5
Photo du Top du PCB de communication: photo 6
Photo du Bottom du PCB de communication: photo 2
Photo des PCBs de puissance et de communication: photo 4
Photo de la vue d'ensemble de l'appareil ouvert: photo 1

### Question 3.1.3

On remarque que la documentation technique est exactement identique dans les deux cas. On peut donc en conclure que les multimetres sont les mêmes.

De plus on remarque que sur la photo 5, en bas a gauche, il y a une indiquation:"UT803" qui indique clairement le constructeur.

### Question 3.1.4

![Alt text](Photos/image_transmission.png)

Chaque "carré noir" représente 7bits, le bit de poids faible est transmis en premier. 

L'octet "range" représente

Les octets "digit" représente les nombres affichés sur l'écran du multimètre.

L'octet "function" représente l'unité utilisé.

L'octet "status" représente le signe de la mesure.

les octets "options" ne sont pas utilisées

les octets "CR" et "LF" valent respectivement "0001101" et "0001010"

### Question 3.1.5

Le composant CH9325 est situé sur la photo 6, juste à coté du quartz.
Ce circuit permet de "prendre en charge la configuration de l'adresse de communication de la puce afin de réaliser plusieurs puces accrochées sur le même port série".

![Alt text](Photos/schema_USB.png)

### Question 3.2.1

![Alt text](Photos/fonction_open.png)

Pour ouvrir un périphérique USB, il faut indiquer l'adresse du "vendor" ainsi que celle du "product"


