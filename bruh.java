import java.util.Scanner;

public class bruh {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    while (true) {
      System.out.print("Enter the number of times to print 'testing', or enter 'q' to quit: ");
      
      String userInput = scanner.nextLine();
      
      if(userInput.equals("q")) {
        break;
      }
      
      int numTimes = Integer.parseInt(userInput);
        
      int i = 0;
      while(i < numTimes){
        System.out.println("testing");
        i++;
      }
    }
    
    scanner.close();
  }
}
