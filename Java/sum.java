import java.util.Scanner;

public class sum {
   public static void main(String[] args) {

      int num1, num2, sum;
      Scanner my_scanner = new Scanner(System.in);
      System.out.print("Enter the first number: ");
      num1 = my_scanner.nextInt();
      System.out.print("Enter the second number: ");
      num2 = my_scanner.nextInt();
      my_scanner.close();
      sum = num1 + num2;
      System.out.print("Sum of the two numbers is: ");
      System.out.print(sum);
   }
}