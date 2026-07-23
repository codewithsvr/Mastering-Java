//using recurssion we are going to print sum of n natural numbers !!
import java.util.*;
public class Recurssion_sumofn{
    static int sumofnnatural(int x){
    if(x==1){
      return 1;
    }
    else{
      return x + sumofnnatural(x-1);
    }
      
    
    }
      public static void main(String args[]){
      int n=sumofnnatural(30);
      System.out.println(n);

}
}
