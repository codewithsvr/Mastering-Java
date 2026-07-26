import java.util.*;

public class Recurssion_fibonacci {
    static int fibonacci(int n,int result) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        else {
            result=fibonacci(n-1,result)+fibonacci(n-2,result);
            return result;
        }

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number");
        int n=sc.nextInt();
        int result=0;
        result=fibonacci(n,result);
        System.out.println("Result is :" + result);

}
}
