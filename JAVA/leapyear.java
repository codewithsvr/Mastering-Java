import java.util.*;

public class leapyear {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int year=sc.nextInt();
        if(year%400==0){
            System.out.println("Leap Year");
        }
        else if(year%4==0){
            System.out.println("Leap year");
        }
        else if(year%100==0){
            System.out.println("Not Leapyear");
        }
        else{
            System.out.println("Not Leapyear");
        }

    }
    
}
