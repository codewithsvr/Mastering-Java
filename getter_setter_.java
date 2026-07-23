class mylife{
    private int salary;
    private String place;
    public void setSalary(int n){
    salary=n;
    }
     public void setPlace(String name){
     place=name;
    }
     public int getSalary(){
     return salary;
    }
     public String getPlace(){
     return place;
    }

}
public class getter_setter_{
    public static void main(String[] args) {
        mylife shashi=new mylife();
        shashi.setSalary(2000000);
        shashi.setPlace("Paris");
        System.out.println("Salary :"+shashi.getSalary());
        System.out.println("Place :"+shashi.getPlace());


    }
}
