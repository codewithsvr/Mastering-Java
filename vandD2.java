/*User Input Version

Take input from user:

Enter name:
Enter age:
Enter CGPA:
Enter grade:


Print:

-----DETAILS-----
Name: ___
Age: ___
CGPA: ___
Grade: ___*/

import java.util.*;

public class vandD2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter name");
        String name=sc.nextLine();
        System.out.println("enter age");
        int age=sc.nextInt();
        System.out.println("cgpa");
        float cg=sc.nextFloat();
        System.out.println("enter grade");
        char grade=sc.next().charAt(0);
// display
    System.out.println("Name: "+name);
     System.out.println("Age: "+age);
      System.out.println("CGPA: "+cg);
       System.out.println("Grade: "+grade);
    }
}
