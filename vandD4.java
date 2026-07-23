/*
Boss Level

Take input:

Name
Age
City
Favorite language

Output:

Hi I am _____
I am _____ years old
I live in _____
My favorite language is _____ */

import java.util.*;

public class vandD4 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter name");
        String name=sc.nextLine();
        System.out.println("enterage");
        int age=sc.nextInt();
        System.out.println("enter city");
        String city=sc.next();
        System.out.println("enter fav lang");
        String lan=sc.next();
        //display
        System.out.println("Hi I am "+name);
        System.out.println("I am "+age+" years old");
        System.out.println("I Live in "+city);
        System.out.println("My favorite language is "+lan);

        
    }
    
}
