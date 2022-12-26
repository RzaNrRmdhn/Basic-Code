import java.util.Scanner;

public class javaOutputFormating {
    public static void main(String[] args) {
        String kata;
        int angka;
        System.out.println("================================");
        Scanner input = new Scanner(System.in);
        for(int i = 0; i < 3; i++){
            kata = input.next();
            angka = input.nextInt();
            System.out.print(kata);
            for(int j = kata.length(); j < 15;j++){
                System.out.print(" ");
            }
            if(angka==0){ 
                System.out.println(String.format("00%d",angka));    
            }else if(angka<100){
                System.out.println(String.format("0%d", angka));
            }else{
                System.out.println(String.format("%d", angka));
            }
        }
        System.out.println("================================");
    }
    
}
