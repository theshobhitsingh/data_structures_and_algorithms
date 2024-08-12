import java.util.Scanner;

public class Prime {

     static boolean isPrime(int num) {
          if (num <= 1) {
               return false;
          }

          for (int i = 2; i * i <= num; i++) {
               if (num % i == 0) {
                    return false;
               }
          }

          return true;
     }

     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the number: ");
          int num = sc.nextInt();

          boolean prime = isPrime(num);

          if (prime) {
               System.out.println(num + " is a prime number.");
          } else {
               System.out.println(num + " is not a prime number.");
          }

          sc.close();
     }
}
