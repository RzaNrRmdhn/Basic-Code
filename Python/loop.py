n = int(input()) #inputan angka batas 
#deklarasi beberapa variabel
hasil = 0
rata = 0
result = 0


for i in range(1, n+1): #  i == 1 sampai 100
    rata += i  
    i+=1

rata = rata/n # rumus menghitung rata rata
print("Rata-rata: ", rata) #cetak rata rata


for j in range(1, n+1): 
    hasil = pow(j - rata, 2) 
    result += hasil # 0 = 0 + 1, 1 + 0 = 1, 1 + 1 = 2
    j+=1 

result = result / (n-1)
print("Hasil Variance:", result)

#subjek 
#PY2022CD-Tugas04-NPM-NAMA