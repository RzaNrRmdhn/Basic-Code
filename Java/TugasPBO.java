import java.io.File;
import java.io.FileOutputStream;
import java.util.Scanner; 
/*
 * Reza Nur Ramadhan
 * 2117051057
 * Kelas D
 * Ilmu Komputer
 */

public  class TugasPBO { // class tugas pbo
    public static void main(String[] args) { // fungsi utama
        
        String Nama = "Nama: Reza Nur Ramadhan\n"; // deklarasi semua jenis data yang ingin dimasukkan kedalam file txt
        String Jurusan = "Jurusan: Ilmu Komputer\n";
        String Npm = "NPM: 2117051057\n";
        String Kelas; // deklarasi untuk diinputkan kemudian dimasukkan kedalam file

        // input ke file txt
        try { // mencoba membaca/mencari file pada direktory
            Scanner Input = new Scanner(System.in); // digunakan untuk inputan
            System.out.print("Masukkan Kelas: "); // masukkan kelas
            Kelas = Input.nextLine();
            Input.close(); // menutup fungsi scanner

            FileOutputStream outFile = new FileOutputStream("R:/Code/Basic Code/Java/intro.txt"); // digunakan untuk memasukkan ke dalam file txt

            for(int i = 0 ; i < Nama.length(); i++){ // looping untuk memasukkan data nama ke dalam file txt
                outFile.write((int)Nama.charAt(i));
            }
            for(int i = 0 ; i < Npm.length(); i++){ // looping untuk memasukkan data NPM ke dalam file txt
                outFile.write((int)Npm.charAt(i));
            }
            for(int i = 0 ; i < Jurusan.length(); i++){ // looping untuk memasukkan data jurusan ke dalam file txt
                outFile.write((int)Jurusan.charAt(i));
            }
            for(int i = 0 ; i < Kelas.length(); i++){ // looping untuk memasukkan data kelas ke dalam file txt
                outFile.write((int)Kelas.charAt(i));
            }
            outFile.close(); // menutup fungsi fileout
            
        } catch (Exception e) { //menangkap output jika file direktory tidak ditemukan
            System.out.println("Tidak ada file yang cocok");
        }

        // output dari file txt
        try { // mencoba membaca/mencari file pada direktory
            File file = new File("R:/Code/Basic Code/Java/intro.txt"); // path directory file disimpan untuk dibaca oleh program
            Scanner input = new Scanner(file); // scanner digunakan untuk membaca file txt

            do{ // looping untuk membaca semua data dalam file lalu di outputkan dalam bentuk string
                String getFile = input.nextLine();
                System.out.println(getFile);
            }while(input.hasNextLine());

            input.close(); // menutup fungsi scanner
            
        } catch (Exception e) { //menangkap output jika file direktory tidak ditemukan
            System.out.println("Tidak ada file yang cocok");
        }
    }
    
}