import java.util.*;

import javax.swing.plaf.synth.SynthLookAndFeel;

public class array_palindrome {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] array=new int[n];
        System.out.println("Enter numbers in array");
        for(int i=0;i<array.length;i++){
            array[i]=sc.nextInt();
        }
        boolean palindrome=true;
        for(int i=0;i<array.length/2;i++){
            if(array[i] != array[n-1-i]){
            palindrome = false;
            break;
            }
        }
        if(palindrome){
            System.out.println("Palindrome");
        }
        else{
         System.out.println("Not a palindrome");
        }
    }
}
