liste=[14,9,13,15,12]

moyenne=sum(liste)/len(liste)
print(f"note max:{max(liste)}\nnote min:{min(liste)}\nmoyenne:{moyenne:0.2f}")

if 10<moyenne and moyenne<12:
    print("mention passable")
elif 12<moyenne and moyenne<14:
    print("mention assez bien")
elif 14<moyenne:
    print("mention bien")