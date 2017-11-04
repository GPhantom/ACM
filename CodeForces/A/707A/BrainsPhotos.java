// 707A
// Brain's Photos
// Implementation
import java.util.Scanner;
import java.io.IOException;
public class BrainsPhotos
{
  static String answer = "#Black&White";
  public static boolean isColored(char c)
  {
    return (c == 'C' || c == 'M' || c == 'Y');
  }
  public static void main(String[] args) throws IOException
  {
    Scanner sc = new Scanner(System.in);
    int n      = sc.nextInt();
    int m      = sc.nextInt();
    int length = n * m;
    for(int i = 0; i < length; i++)
    {
      char c = sc.next().charAt(0);
      if(isColored(c))
      {
        answer = "#Color";
        break;
      }
    }
    System.out.print(answer);
  }
}
