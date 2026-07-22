import java.util.*;
public class fngreatoftwo {
    public static void greatest(int a,int b){
        if(a>b){
            System.out.println("a is greater");
        }
        else {
            System.out.println("b is greater");
        }
        return;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter nos");
        int a=sc.nextInt();
        int b=sc.nextInt();
        greatest(a,b);

    }
    
}
