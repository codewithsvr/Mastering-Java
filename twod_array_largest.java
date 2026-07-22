import java.util.Scanner;

public class twod_array_largest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[][] arr = new int[3][3];

        System.out.println("Enter 9 elements:");

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        int max = arr[0][0];

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(arr[i][j] > max) {
                    max = arr[i][j];
                }
            }
        }

        System.out.println("Largest Element = " + max);
    }
}