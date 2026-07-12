import java.util.*;
public class array_secondmin {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] array=new int[n];
        System.out.println("Enter numbers in array");
        for(int i=0;i<array.length;i++){
            array[i]=sc.nextInt();
        }
        int min=Integer.MAX_VALUE;
        int secondmin=Integer.MAX_VALUE;
        for(int i=0;i<array.length;i++){
            if(array[i]<min){
                secondmin=min;
                min=array[i];
        }
        else if(array[i]<secondmin && array[i]!=min){
        secondmin=array[i];
        }
        }
        System.out.println("the second min element is :"+secondmin);
    }
}
