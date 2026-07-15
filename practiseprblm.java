class Employee{
 int salary;
 String name;
 public int getSalary(){
    return salary;
 }
 public String getName(){
    return name;
 }
 public void setName(String n){
    name =n;
 }

}

public class practiseprblm {
  public static void main(String[] args) {
    Employee shashi=new Employee();
    shashi.setName("CodeWithShashi");
    System.out.println(shashi.getName());
    shashi.salary=1000000;
    System.out.println(shashi.getSalary());

    
  }
}
