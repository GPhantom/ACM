// 540A
// Combination Lock
// Implementation
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class CombinationLock
{
  static int moves = 0;
  public static void main(String [] args) throws IOException
  {
    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(bufferedReader.readLine());
    String o_state = bufferedReader.readLine();
    String key     = bufferedReader.readLine();
    for(int i = 0; i < n; i++)
    {
      int e1             = Character.getNumericValue(o_state.charAt(i));
      int e2             = Character.getNumericValue(key.charAt(i));
      int max            = Math.max(e1, e2);
      int min            = Math.min(e1, e2);
      int normal_method  = max - min;
      int reverse_method = (10 - max) + (min);
      moves             += Math.min(normal_method, reverse_method);
    }
    System.out.print(moves);
  }
}
