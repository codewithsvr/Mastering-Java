/*check if a student passed:

Condition:

Marks >35 AND attendance >75 */

import java.util.*;

public class studentqualify {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter attendence");
        float attendence=sc.nextFloat();
        System.out.println("Enter marks");
        float marks=sc.nextFloat();
        if(marks>=35 && attendence>=75){
            System.out.println("Qualified");
        }
        else {
            System.out.println("Not qualified");
        }
    }
    
}
