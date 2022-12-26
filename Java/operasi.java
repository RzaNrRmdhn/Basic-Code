import java.util.Scanner;

public class operasi {
    
    static float penjumlahan(float a, float b){ // penjumlahan (2,2)
        return a + b;
    }

    static float pengurangan(float a, float b){
        return a - b;
    }

    static float perkalian(float a, float b){
        return a * b;
    }

    static float pembagian(float a, float b){
        return a / b;
    }

    /**
     * @param args
     */
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int c;
        float d, e;

        System.out.print("Masukkan Pilihan: ");
        c = input.nextInt(); // 1

        System.out.print("Masukkan angka pertama: ");
        d = input.nextFloat(); // 2

        System.out.print("Masukkan angka kedua: ");
        e =input.nextFloat(); // 2

        input.close();

        switch (c) {
            case 1:
                System.out.println(penjumlahan(d, e)); // penjumlahan (2, 2)
                break;
            
            case 2:
                System.out.println(pengurangan(d, e));
                break;
            
            case 3:
                System.out.println(perkalian(d, e));
                break;
            
            case 4:
                System.out.println(pembagian(d, e));
                break;
            
            default:
                System.out.println("Inputan anda salah");
                break;
        }
        
    }
}
