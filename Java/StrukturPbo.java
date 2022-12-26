import java.util.Scanner;

public class StrukturPbo{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int npm;
        do{
            System.out.print("Masukkan NPM: ");
            npm = input.nextInt();
            input.nextLine();
            switch(npm){
                case 2117051057:
                    System.out.println("Masukkan Pilihan: ");
                    System.out.println("1. Masukkan Nilai & Cetak Huruf Mutu");
                    System.out.println("2. Exit");
                    System.out.print("Pilihan: ");
                    int Pilihan = input.nextInt();
                    
                    if(Pilihan == 1){
                        System.out.println("Masukkan Pilihan: ");
                        System.out.println("1. Masukkan satu nilai");
                        System.out.println("2. Masukkan Beberapa nilai");
                        System.out.println("3. Exit");
                        System.out.print("Pilih: ");
                        int Pilih = input.nextInt();
                        switch(Pilih){
                            case 1:
                                System.out.print("Masukkan Nilai: ");
                                int nilai = input.nextInt();
                                String Mutu = (nilai >= 76) ? "A" : (nilai >= 71) ? "B+" : (nilai >= 66) ? "B" :
                                              (nilai >= 61) ? "C+" : (nilai >= 56) ? "C" : (nilai >= 50) ? "D" : "E"; 
                                
                                System.out.println("Nilai Mutu Anda: " + Mutu);
                                break;

                            default:
                                System.out.print("Masukkan Jumlah Nilai yang ingin diinput: ");
                                int jumlah = input.nextInt();
                                int[] angka = new int[jumlah];

                                System.out.print("Masukkan Nilai: ");
                                for(int i = 0; i < jumlah; i++){
                                    angka[i] = input.nextInt();
                                }

                                int j = 0;
                                System.out.print("Daftar Nilai: ");
                                while(j < jumlah){
                                    System.out.print(angka[j] + " ");
                                    j++;
                                }

                                System.out.println("\nPilih Inputan: ");
                                System.out.println("1. Hitung Rata-Rata & cetak huruf Mutu: ");
                                System.out.println("2. Exit");
                                System.out.print("Pilih: ");
                                int pilihan = input.nextInt();
                                int total = 0;

                                if(pilihan == 1){
                                    for(int i = 0; i < jumlah; i++){
                                        total += angka[i];
                                    }
                                    total = total / jumlah;
                                    String hurufMutu = (total >= 76) ? "A" : (total >= 71) ? "B+" : (total >= 66) ? "B" :
                                                       (total >= 61) ? "C+" : (total >= 56) ? "C" : (total >= 50) ? "D" : "E"; 
                                    
                                    System.out.println("Total Nilai: " + total);
                                    System.out.println("Nilai Mutu Anda: " + hurufMutu);
                                }else{
                                    System.exit(0);
                                }
                                break;
                        }
                    }else{
                        System.exit(0);
                    }
                    break;
                default:
                    System.out.println("Inputan Salah");
                    continue;
            }
        }while(npm != 2117051057);
    }
}
