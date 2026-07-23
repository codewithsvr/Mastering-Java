import java.util.*;


public class RPSgame {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //0 for rock
        //1 for paper
        //2 for scissor
        System.out.println("Enter number : (0 for rock, 1 for paper, 2 for scissor)");
        int userchoice=sc.nextInt();
        if(userchoice>2){
            System.out.println("Invalid");
            return;
        }
        Random random=new Random();
        int computerchoice=random.nextInt(3);
        if(computerchoice==userchoice){
            System.out.println("DRAW");
        }
        else if(userchoice==0 && computerchoice==2 || userchoice==1 && computerchoice==0 || userchoice==2 && computerchoice==1 ){
        System.out.println("YOU WIN");
        }
        else{
            System.out.println("COMPTUER WIN");
        }
        System.out.println("Computer choice :"+computerchoice);
        if(computerchoice==0){
            System.out.println("Computer choose ROCK");
        }
        else if(computerchoice==1){
            System.out.println("Computer choose PAPER");
        }
        else if(computerchoice==2){
            System.out.println("Computer choose SCISSOR");
        }
    }
    
}
