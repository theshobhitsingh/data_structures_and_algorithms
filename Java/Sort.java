import java.util.Scanner;

public class Sort {
     public static void main(String[] args) {
          Scanner scanner = new Scanner(System.in);

          System.out.print("Enter the number of elements in the array: ");
          int n = scanner.nextInt();

          int[] array = new int[n];

          System.out.println("Enter " + n + " integers:");
          for (int i = 0; i < n; i++) {
               array[i] = scanner.nextInt();
          }

          bubbleSort(array);

          System.out.println("Sorted array in ascending order:");
          for (int num : array) {
               System.out.print(num + " ");
          }

          scanner.close();
     }

     public static void bubbleSort(int[] array) {
          int n = array.length;
          boolean swapped;
          for (int i = 0; i < n - 1; i++) {
               swapped = false;
               for (int j = 0; j < n - 1 - i; j++) {
                    if (array[j] > array[j + 1]) {
                         int temp = array[j];
                         array[j] = array[j + 1];
                         array[j + 1] = temp;
                         swapped = true;
                    }
               }
               if (!swapped) {
                    break;
               }
          }
     }
}