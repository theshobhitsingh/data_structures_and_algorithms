import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class MyArray {
     List<Integer> lst;
     int size;
     int sum;

     public MyArray() {
          lst = new ArrayList<>();
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter size of the array: ");
          size = sc.nextInt();

          System.out.println("Enter elements:");
          for (int i = 0; i < size; i++) {
               lst.add(sc.nextInt());
          }

          sc.close();
     }

     public int sumOfArray() {
          sum = 0;
          for (int num : lst) {
               sum += num;
          }
          return sum;
     }

     public static void main(String[] args) {
          MyArray arr = new MyArray();
          int totalSum = arr.sumOfArray();
          System.out.println("Sum of the array elements: " + totalSum);
     }
}
