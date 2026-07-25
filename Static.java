class data{
    int num;
    String college;
}

public class Static{
    public static void main(String[] args) {
        data d1 = new data();
        d1.num = 10;
        d1.college = "ABC";

        data d2 = new data();
        d2.num = 20;
        d2.college = "XYZ";

        System.out.println("Data of d1: " + d1.num + ", " + d1.college);
        System.out.println("Data of d2: " + d2.num + ", " + d2.college);
        
    }
}