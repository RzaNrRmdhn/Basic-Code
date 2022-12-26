import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class javaIfElse {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
    int a = scanner.nextInt();
    scanner.close();

    if(a % 2 == 0 && a < 5){
      System.out.println("Not Weird");

    }else if(a % 2 == 0 && a < 20){
      System.out.println("Weird");

    }else if(a % 2 == 0 && a > 20){
      System.out.println("Not Weird");

    }else{
      System.out.println("Weird");
    }
}
}
