public class CopyArrayData {
     public static void main(String[] args) {
          // Source array
          int[] sourceArray = { 10, 20, 30, 40, 50 };

          // Destination array
          int[] destinationArray = new int[sourceArray.length];

          // Copy data from source to destination array
          for (int i = 0; i < sourceArray.length; i++) {
               destinationArray[i] = sourceArray[i];
          }

          // Display the copied array
          System.out.println("Destination array:");
          for (int num : destinationArray) {
               System.out.print(num + " ");
          }
     }
}