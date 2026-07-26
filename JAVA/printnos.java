import java.util.*;

public class printnos {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int i=0;
        System.out.println("upto which number u need to print?");
        int n=sc.nextInt();
        for(i=0;i<n+1;i++){
            System.out.println(i);
        }
    }
    
}
