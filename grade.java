/*
1. Grade Calculator

Input marks and print:

90+ → A
75-89 → B
50-74 → C
Below 50 → Fail */

import java.util.*;

public class grade {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter marks");
          float marks=sc.nextFloat();
          if(marks>100||marks<0){
            System.out.println("Invalid Marks");
          }
          if(marks>=90&&marks<=100){
            System.out.println("A Grade");
          }
          else if(marks>=75 && marks<=89){
            System.out.println("B Grade");
          }
          else if(marks>=50 && marks<=74){
            System.out.println("C Grade");
          }
          else if(marks<50&&marks>=0){
            System.out.println("FAIL");
          }

    }
    
}
