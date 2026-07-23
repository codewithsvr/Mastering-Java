import java.util.Scanner;

public class printtypeofno {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int pos = 0, neg = 0, zero = 0;
        int num, choice;

        do {
            System.out.print("Enter a number: ");
            num = sc.nextInt();

            if (num > 0) {
                pos++;
            } else if (num < 0) {
                neg++;
            } else {
                zero++;
            }

            System.out.print("Press 1 to continue, 0 to stop: ");
            choice = sc.nextInt();

        } while (choice == 1);

        System.out.println("Positive numbers: " + pos);
        System.out.println("Negative numbers: " + neg);
        System.out.println("Zeros: " + zero);

        sc.close();
    }
}