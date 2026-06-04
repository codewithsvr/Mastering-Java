import java.util.Scanner;

public class arrayavg{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int array[]=new int[x];
        for(int i=0;i<x;i++){
            array[i]=sc.nextInt();
        }
        int avg=0;
        int sum=0;
        for(int i=0;i<x;i++){
            sum=sum+array[i];
        }
        avg=sum/x;
        System.out.println(avg);
    }
}
