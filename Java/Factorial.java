import java.util.Scanner;

public class Factorial {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the number: ");
          int num = sc.nextInt();
          int factorial = 1;

          for (int i = 1; i <= num; i++) {
               factorial = factorial * i;
          }

          System.out.println("The factorial of " + num + " is " + factorial);

          sc.close();
     }
}
