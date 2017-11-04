// 271A
// Beautiful Year
// Brute Force
import java.util.Scanner;
import java.io.IOException;
public class BeautifulYear
{
  public static void main(String[] args) throws IOException
  {
    Scanner sc    = new Scanner(System.in);
    String year   = sc.nextLine(); // "2013" --> "abcd"
    while(true)
    {
      // Convert to int --> do some stuff --> Converts back to string
      year = String.valueOf(Integer.parseInt(year) + 1);
      char a        = year.charAt(0); // 2
      char b        = year.charAt(1); // 0
      char c        = year.charAt(2); // 1
      char d        = year.charAt(3); // 3
      if(a != b && a != c && a != d && b != c && b != d && c != d)
      {
        break;
      }
    }
    System.out.print(year);
  }
}
