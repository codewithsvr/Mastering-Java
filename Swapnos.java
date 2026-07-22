/*
swap 2 numbers without using 3rd variable */

import java.util.*;

public class Swapnos {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter 1st variable value");
        int a=sc.nextInt();
        System.out.println("enter 2nd variable value");
        int b=sc.nextInt();
        a=a+b;
        b=a-b;
        a=a-b;
        System.out.println("AFTER SWAPPING");
        System.out.println("a= "+a);
        System.out.println("b= "+b);
        
    }
    
}
