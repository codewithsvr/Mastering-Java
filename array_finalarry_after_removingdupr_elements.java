import java.util.*;

public class array_finalarry_after_removingdupr_elements{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter array size: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter array elements:");

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int[] unique = new int[n];
        int size = 0;

        // Remove duplicates
        for (int i = 0; i < n; i++) {

            boolean duplicate = false;

            // Check if arr[i] already exists in unique[]
            for (int j = 0; j < size; j++) {

                if (arr[i] == unique[j]) {
                    duplicate = true;
                    break;
                }
            }

            // If not found, add it
            if (!duplicate) {
                unique[size] = arr[i];
                size++;
            }
        }

        // Print array after removing duplicates
        System.out.println("Array after removing duplicates:");

        for (int i = 0; i < size; i++) {
            System.out.print(unique[i] + " ");
        }
    }
}