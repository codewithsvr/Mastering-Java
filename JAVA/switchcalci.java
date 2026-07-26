import java.util.*;

class switchcalci{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int result=sc.nextInt();
        switch(result){
            case 1: result=a+b;
            System.out.println(result);
            break;
             case 2: result=a-b;
            System.out.println(result);
            break;
             case 3: result=a*b;
            System.out.println(result);
            break;
             case 4: result=a/b;
            System.out.println(result);
            break;
            default: System.out.println("Invalid number");

        }

    }
}