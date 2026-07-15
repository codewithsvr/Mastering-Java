class Square{
    int side;
    public void side(int n){
    side=n;
    }
     public void area(){
     System.out.println(side*side);
    }
     public void perimeter(){
        System.out.println(4*side);

    }

}

public class squareclass {
    public static void main(String[] args) {
        Square shape=new Square();
        shape.side(5);
        shape.area();
        shape.perimeter();

    }
}
