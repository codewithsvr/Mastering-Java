import java.util.*;
public class fnproduct {
    public static void product(int x,int y) {
        int Product=x*y;
        System.out.println(Product);
    }
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int x=sc.nextInt();
    int y=sc.nextInt();
    product(x,y);
}

}
