import java.util.Scanner;

public class kurir{

    static float totalharga(float ongkir, float harga){
        return ongkir * harga;
    }

    static int ongkir(int kode){
        int ongkir = 0;

        switch(kode){
            case 1:
                ongkir = 10000;
                break;
            
            case 2:
                ongkir = 20000;
                break;
            
            case 3:
                ongkir = 30000;
                break;
            
            default:
                ongkir = 50000;
                break;
        }
        return ongkir;
    }

    static int kode(int jarak){
        int kode = 0;
        switch(jarak){
            case 1:
                kode = 1;
                break;
            
            case 2: 
                kode = 2;
                break;
            
            case 3:
                kode = 3;
                break;
            
            default:
                kode = 4;
                break;
        }
        return kode;
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        

        input.close();
        

        
    }
}
