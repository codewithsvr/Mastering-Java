/*Check if age is greater than 18.
Ternary operator
 */

import java.util.*;

public class agecheck{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter age");
        int age=sc.nextInt();
        String result=(age>=18)?"ADULT":"NOT ADULT";
        System.out.println(result);
    }
}
