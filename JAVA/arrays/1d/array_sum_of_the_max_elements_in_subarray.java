import java.util.*; 
public class array_sum_of_the_max_elements_in_subarray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int array[]=new int[n];
        for(int i=0;i<n;i++){
            array[i]=sc.nextInt();
        }
        int target=sc.nextInt();
        int sum=0;
        for(int i=0;i<n;i++){
         if((sum+=i)==target){
            System.out.println();
         }
        }
    }
}
