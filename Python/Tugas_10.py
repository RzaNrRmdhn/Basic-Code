import random
i = 0
Matriks = []

Row = eval(input("input baris : "))
Column = eval(input("input kolom : "))

for baris in range (Row):
    Matriks.append([])
    for kolom in range (Column):
        Matriks[baris].append(random.randint(1,9))

for baris in Matriks:
    for val in baris:
        print(val, end=" ")
    print ()

for kolom in range (len(Matriks)):
    total = 0
    for baris in range (len(Matriks)):
        total += Matriks[baris][kolom]

    total = total / (len(Matriks))
    print("hasil rata rata kolom ke -", kolom+1 , "adalah", total)

