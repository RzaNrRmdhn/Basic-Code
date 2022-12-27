def Nilai(nilai) :
    if nilai > 76 :
        mutu = 'A'
    elif nilai >= 71 :
        mutu = 'B+'
    elif nilai >= 66 :
        mutu = 'B'
    elif nilai >= 61 :
        mutu = 'C+'
    elif nilai >= 56 :
        mutu = 'C'
    elif nilai >= 51 :
        mutu = 'D'
    else :
        mutu = 'E'
    
    return mutu

Nama = str(input("Masukkan Nama: "))
NPM = int(input("Masukkan NPM: "))
Nilai = float(input("Masukkan Nilai: "))

print(Nama)
print(NPM)
print(Nilai(Nilai))

