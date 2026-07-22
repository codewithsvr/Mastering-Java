/* CURRENCY CONVERTOR */

import java.util.*;

public class currencyconvertor {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        float usD = 96;
        float Euro = 112;

        System.out.println("1. INR TO DOLLAR");
        System.out.println("2. INR TO EURO");
        System.out.println("3. DOLLAR TO INR");
        System.out.println("4. EURO TO INR");

        System.out.println("Enter your choice:");

        int choice = sc.nextInt();

        switch(choice){

            case 1:
                System.out.println("Enter amount in INR:");
                float inr = sc.nextFloat();

                float dollar = inr / usD;

                System.out.println(inr +
                        " rupees in dollars is: "
                        + dollar + " Dollars");
                break;


            case 2:
                System.out.println("Enter amount in INR:");
                float in = sc.nextFloat();

                float euro = in / Euro;

                System.out.println(in +
                        " rupees in Euros is: "
                        + euro + " Euros");
                break;


            case 3:
                System.out.println("Enter amount in Dollar:");
                float dlr = sc.nextFloat();

                float inru = dlr * usD;

                System.out.println(dlr +
                        " Dollars in INR: "
                        + inru + " rupees");
                break;


            case 4:
                System.out.println("Enter amount in Euros:");
                float euros = sc.nextFloat();

                float i = euros * Euro;

                System.out.println(euros +
                        " Euros in INR: "
                        + i + " rupees");
                break;


            default:
                System.out.println("INVALID CHOICE");
        }

    }
}