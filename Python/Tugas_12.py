def main () : 
    try :
        x = int(input('Masukkan pilihan anda\n1. Membuat file\n2. Membuka file\n3. Menambahkan file\n4. exit\n'))

        if x == 3 :
            b = input('Masukkan nama file yang ingin ditambahkan sesuatu : ')
            with open(b , 'wt') as f:
                f.write (input('Masukkan yang isi teks  : '))
                f.close()

        elif x == 1 :
                nama = input('Nama file yang ingin dibuat : ')
                isi = input('Masukkan isi teks file : ')
                with open(nama, 'xt') as f :
                    f.write(isi)
                    f.close()

        elif x == 2 :
                nama = input('Nama file yang ingin dibaca : ')
                with open(nama, 'r') as f :
                    print(f.read())
                    f.close()

    except (SyntaxError,NameError, ValueError):
        print("masukan angka dengan benar")
        main()    
    
main()