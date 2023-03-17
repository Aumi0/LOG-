import java.util.Scanner;

public class bruh {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the number of times to print 'testing': ");
    int numTimes = scanner.nextInt();
    
    int i = 0;
    while(i < numTimes){
      System.out.println("testing");
      i++;
    }
    
    scanner.close();
  }
}
