import java.util.Scanner;

public class arraybasic{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("ENter size of the array");
        int n=sc.nextInt();
        int array[]=new int[n];
        System.out.println("ENter the numbers");
        for(int i=0;i<n;i++){
            array[i]=sc.nextInt();
        }
        System.out.println("Numbers in array are :");
        for(int i=0;i<array.length;i++){
            System.out.println(+array[i]);
        }

    }
}