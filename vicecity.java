class Tommy{
    public void run(){
        System.out.println("Running from the enemy");
    }
    public void hitting(){
        System.out.println("Hitting the enemy");
    }
    public void swim(){
        System.out.println("Swimming in the water");
    }
}

public class vicecity {
    public static void main(String[] args) {
    Tommy NPC=new Tommy();
    NPC.run();
    NPC.hitting();
    NPC.swim();
    }
}
