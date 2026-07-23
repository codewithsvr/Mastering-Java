import java.util.Scanner;

public class fnprime {
    public static void fn(int n) {

        if (n <= 1) {
            System.out.println("not prime");
            return;
        }

        for (int i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                System.out.println("not prime");
                return;
            }
        }

        System.out.println("prime");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        fn(a);
    }
}