import java.util.*;
public class fnsumodd {
    public static void sumodd(int n){
        int sum=0;
        for(int i=1;i<=n;i++){
        sum=sum+(2*i-1);
        }
        System.out.println("sum: "+sum);
        return;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter n");
        int a=sc.nextInt();
        sumodd(a);
    }
}