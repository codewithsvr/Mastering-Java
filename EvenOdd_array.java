import java.util.Scanner;

public class EvenOdd_array {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int []array=new int[5];
        for(int i=0;i<array.length;i++){
            array[i]=sc.nextInt();
        }
        int even_count=0;
        int odd_count=0;
        for(int i=0;i<array.length;i++){
            if(array[i]%2==0){
                even_count++;
            }
            else{
                odd_count++;
            }
        }
        System.out.println("Even count is: "+even_count);
        System.out.println("Odd count is: "+odd_count);

    }
    
}
