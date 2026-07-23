public class Recurssion_multiplicationtable {
    static void multiplicationtable(int n){
        for(int i=1;i<=10;i++){
            System.out.format("%d X %d : %d\n",n,i,n*i);
        }
    }
    public static void main(String[] args) {
        int n=8;
        multiplicationtable(n);
    }
}
