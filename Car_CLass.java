class carspecs{
    private float milege;
    private String brand;
    private boolean accidentdone;
    private double kmreading;
    private long price;

    public void setmilege(float n){
    milege=n;
    }
    public void setbrand(String n){
    brand=n;
    }
    public void setaccidentdone(boolean n){
    accidentdone=n;
    }
    public void setkmreading(double n){
    kmreading=n;
    }
    public void setprice(long n){
    price=n;
    }
    public float getmilege(){
    return milege;
    }
    public String getbrand(){
    return brand;
    }
    public boolean getaccidentdone(){
    return accidentdone;
    }
    public double getkmreading(){
    return kmreading;
    }
    public long getprice(){
    return price;
    }

}
public class Car_CLass {
    public static void main(String[] args) {
        carspecs mycar=new carspecs();
        mycar.setmilege(20.6f);
        mycar.setbrand("Ferrari");
        mycar.setaccidentdone(true);
        mycar.setkmreading(10023.00);
        mycar.setprice(900000000);
        System.out.println("Milege: " +mycar.getmilege());
        System.out.println("Brand: "+mycar.getbrand());
        System.out.println("Aciddent done?: "+mycar.getaccidentdone());
        System.out.println("KMReading: "+mycar.getkmreading());
        System.out.println("Price: "+mycar.getprice());

    }
}
