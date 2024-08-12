import java.util.*;

public class evenOdd {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the  number: ");
          int num = sc.nextInt();
          if (num % 2 == 0) {
               System.out.println(num + " is an even number");
          } else {
               System.out.println(num + " is a odd number");
          }
          sc.close();
     }
}
