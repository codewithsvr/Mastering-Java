import java.util.*;
public class fnfact{
    public static void facto(int n){
        int fact=1;
        for(int i=n;i>=1;i--){
            fact=fact*i;
        }
        System.out.println(fact);

    }
    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter n");
    int n=sc.nextInt();
    facto(n);

    }
    
}