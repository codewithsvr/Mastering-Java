/*
username.equals("admin")
&&
password.equals("java123")
 */

import java.util.*;

public class loginsystem {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter username");
        String username=sc.next();
        System.out.println("Enter password");
        String password=sc.next();
        if(username.equals("admin") && password.equals("java123")) {
            System.out.println("Opening the page wait a sec");
        }
        else{
            System.out.println("Invalid username or password");
        }

        
    }
    
}
