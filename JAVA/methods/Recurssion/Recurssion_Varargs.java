//Write a fn to find avg of a set of nos passed as argument.
//Hint----->Varargs concept


import java.util.*;
public class Recurssion_Varargs {
    public static float avg(int...array){
        float avg=0;
         int sum=0;
        for(int a:array){
            sum+=a;
            avg=((float)sum/array.length);
            
        }
        return avg;
    }
    public static void main(String[] args) {
        System.out.println(avg(1,2));
        System.out.println(avg(1,2,3));
        System.out.println(avg(1,2,3,4));
        System.out.println(avg(1,2,3,4,5));
        System.out.println(avg(1,2,3,4,5,6));
    }
}
