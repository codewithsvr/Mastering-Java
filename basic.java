class custom {
    int rollno;
    String name;
    public void print(){
        System.out.println("HEllo");
    }
}

public class basic {
    public static void main(String[] args) {

        custom details = new custom();

        details.rollno = 15;
        details.name = "shashi";

        System.out.println(details.rollno);
        System.out.println(details.name);
        details.print();
    }
}