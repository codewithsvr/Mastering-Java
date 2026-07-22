import java.util.*;
public class Recurssion_factorial{
    static int factorialfn(int x,int result){
        
        if(x==0||x==1){
            return 1;
        }
        else{
            result=x*factorialfn(x-1,result);
            return result;
        }
            
    }
     public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter number");
        int n=sc.nextInt();
        int result=0;
        result=factorialfn(n,result);
        System.out.println("Factorial of number is :" + result);
}
}
