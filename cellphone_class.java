class cellphone{
    public void ring(){
        System.out.println("Riging.....");
}
public void vibrating(){
    System.out.println("Vibrating..");
}
}

public class cellphone_class {
    public static void main(String[] args) {
        cellphone phone=new cellphone();
        phone.ring();
        phone.vibrating();
    }
    
}
