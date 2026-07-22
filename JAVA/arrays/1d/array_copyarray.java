import java.util.*;

public class array_copyarray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array size");
        int n=sc.nextInt();
        int[] array=new int[n];
        System.out.println("Enter numbers in array");
        for(int i=0;i<array.length;i++){
            array[i]=sc.nextInt();
        }
        int copyarray[]=new int[n];
        // TO COPY ELEMENTS FROM ARRAY TO COPYARRAY
        for(int i=0;i<copyarray.length;i++){
            copyarray[i]=array[i];
        }
        //diaplay
        System.out.println("copied elements are :");
        for(int i=0;i<n;i++){
            System.out.println(copyarray[i]);
        }

    }
    
}
