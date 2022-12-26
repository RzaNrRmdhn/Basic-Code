import java.util.Scanner;


public class struktur_control {

    public static void main(String[] args) {
        float nilai;
        Scanner input = new Scanner(System.in);
        do{
            System.out.print("Masukkan Nilai: ");
            nilai = input.nextFloat();

            String Mutu = (nilai >= 76) ? "A" : (nilai >= 71) ? "B+" : (nilai >= 66) ? "B" :
                          (nilai >= 61) ? "C+" : (nilai >= 56) ? "C" : (nilai >= 50) ? "D" : "E";
            

            System.out.println("Nilai Mutu: " + Mutu);
        }while(true);
    }
}