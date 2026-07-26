import java.util.*;

public class IncomeTax {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        double income = sc.nextDouble();
        double tax;

        if (income < 250000) {
            tax = 0;
        }

        else if (income <= 500000) {
            tax = income * 0.05;
        }

        else {
            tax = income * 0.20;
        }

        System.out.println("Tax = " + tax);
    }
}