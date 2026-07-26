//temp conversion C---->F
import java.util.*;

public class Fahrenheit {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tempinC=sc.nextInt();
        float F;
        F=(9*tempinC)/5 +32;
        System.out.println(F);
    }
    
}
