import java.util.*;
public class array_mergetwoarrays {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("First array");
        int n1=sc.nextInt();
        int array1[]=new int[n1];
        for(int i=0;i<n1;i++){
            array1[i]=sc.nextInt();
        }
        System.out.println("Second array");
        int n2=sc.nextInt();
        int array2[]=new int[n2];
        for(int i=0;i<n2;i++){
            array2[i]=sc.nextInt();
        }
        int mergearray[]=new int[n1+n2];
         for(int i=0;i<n1;i++){
            mergearray[i]=array1[i];
        }
        for(int i=0;i<n2;i++){
            mergearray[n1+i]=array2[i];
        }
        System.out.print("merged array is :");
        for(int i=0;i<mergearray.length;i++){
            System.out.print(mergearray[i]+" ");
        }



    }
}
