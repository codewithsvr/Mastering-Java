import java.util.Scanner;

public class linear_search_array{
    public static int linearsearch(int []array,int key){
        for(int i=0;i<array.length;i++){
            if(array[i]==key){
                return i;
            }
        } 
        return -1;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size");
        int n=sc.nextInt();
        int []array=new int[n];
        System.out.println("Enter elements in array");
        for(int i=0;i<array.length;i++){
         array[i]=sc.nextInt();   
        }
        System.out.println("Enter key");
        int key=sc.nextInt();
        int result=linearsearch(array,key);
        if(result!=-1){
            System.out.println("Element found at index :"+result);
        }
        else{
            System.out.println("Element not found");
        }

     
    }
}