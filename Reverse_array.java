import java.util.Scanner;

public class Reverse_array {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int []array=new int[5];
        for(int j=0;j<array.length;j++){
            array[j]=sc.nextInt();
        }
        //printing in rev order
        System.out.println("Array in rev order :");
        for(int j=array.length-1;j>=0;j--){
            System.out.println(array[j]);
        }
    }
    
}
