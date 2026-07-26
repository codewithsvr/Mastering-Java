package arrays;
import java.util.Scanner;

public class arraysearch {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of the array");
        int n=sc.nextInt();
        int array[]=new int[n];
        System.out.println("Entet the elements");
        for(int i=0;i<n;i++){
            array[i]=sc.nextInt();
        }
        System.out.println("Enter the element to search");
        int x=sc.nextInt();
        for(int i=0;i<n;i++){
            if(array[i]==x){
                System.out.println("Element found at index :"+i);
                return;
            }
           
        }
                System.out.println("requested element not in the array");
           

    }
    
}
