import java.util.*;

public class array_duplicate_elementsprinting {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter array elements:");

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Pick one element at a time
        for (int i = 0; i < n; i++) {

            boolean printed = false;

            // Check if this element has already appeared before
            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    printed = true;
                    break;
                }
            }

            // If already appeared, skip it
            if (printed) {
                continue;
            }

            // Check if the current element appears again later
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    System.out.println("Dup: "+arr[i]);
                    break;
                }
            }
        }
    }
}