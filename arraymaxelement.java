import java.util.Scanner;

public class arraymaxelement{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int array[]=new int[x];
        for(int i=0;i<x;i++){
            array[i]=sc.nextInt();
        }
    int max=0;
        for(int i=0;i<x;i++){
           if(array[i]>max){
            max=array[i];
           }
        }
        System.out.println(max);
    }
}
