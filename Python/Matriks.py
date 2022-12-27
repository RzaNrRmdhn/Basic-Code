"""
-> buat matriks yang bisa menerima inputan
-> menghitung rata rata tiap kolom
"""


arr=[]
for i in range(3): # 0,0 + 1,0 + 2,0
    rows = []
    for j in range(3): 
        x = int(input())
        rows.append(x)
    arr.append(rows)

for i in range(3):
    for j in range(3):
        print(arr[i][j],end=' ')