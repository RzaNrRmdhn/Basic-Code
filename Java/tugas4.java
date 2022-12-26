import java.util.Scanner;

public class tugas4{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        
        int Npm, Kuis, Uts, Uas;

        do{
            System.out.print("Masukkan Npm Anda: ");
            Npm = input.nextInt();
            if(Npm == 2117051057){
                
                String pilih;
                do{
                    System.out.println("1. Input\n2. Exit");
                    System.out.print("Masukkan Pilihan: ");
                    pilih = input.nextLine();    
                } while(pilih != "Exit" || pilih != "exit");
                
                

                System.out.print("Masukkan Nilai Kuis: ");
                Kuis = input.nextInt();
                System.out.print("Masukkan Nilai UTS: ");
                Uts = input.nextInt();
                System.out.print("Masukkan Nilai UAS: ");

            }else{
                
            }
        } while (Npm != 0);

    }
}