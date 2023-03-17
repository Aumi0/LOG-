import java.util.Scanner;

public class bruh {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    String userInput = "";
    while(!userInput.equals("q")) {
      System.out.print("Enter the number of times to print 'testing', or enter 'q' to quit: ");
      userInput = scanner.nextLine();
      
      if(!userInput.equals("q")) {
        int numTimes = Integer.parseInt(userInput);
        
        int i = 0;
        while(i < numTimes){
          System.out.println("testing");
          i++;
        }
      }
    }
    
    scanner.close();
  }
}
