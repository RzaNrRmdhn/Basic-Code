import java.util.Scanner;
/**
 * Praktikum4
 */
public class Praktikum4 {
    public static void main(String[] args) {
    //    Scanner input = new Scanner(System.in);
    //     int n = input.nextInt();
    //     int[] angka = new int[n];

    //     for(int i = 0; i < angka.length; i++){
    //         angka[i] = input.nextInt();
    //     }
    //     int x = input.nextInt();
    //     int j;
    //     for(j = 0; j < angka.length;j++){
    //         if(angka[j] == x){
    //             System.out.println("Nilai ditemukan");
    //             break;
    //         }
    //     }
    //     if(j == angka.length){
    //         System.out.println("Nilai tidak ditemukan");
    //     }
    //     input.close();

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] angka = new int[n];
        int jumlah = 0;
        int temp;

        for(int i = 0; i < angka.length; i++){
             angka[i] = input.nextInt();
        }
        for (int i = 0; i < angka.length; i++){
            for (int j = i+1; j < angka.length; j++) {
                if( angka[j] < angka[i]){ // 5 > 2
                    temp = angka[i];
                    angka[i] = angka[j];
                    angka[j] = temp;
                }
            }
        }
        for(int i: angka){
            System.out.print(i + " ");
        }
        
        for (int i = 0; i < angka.length; i++) {
            jumlah+=angka[i];
        }
        
        System.out.println(jumlah);
        input.close();
    }
    
}
