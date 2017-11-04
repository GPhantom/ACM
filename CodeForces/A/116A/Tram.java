// 116A
// Tram
// Implementation
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class Tram
{
  public static void main(String[] args) throws IOException
  {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n       = Integer.parseInt(br.readLine());
    String[] s  = new String[n*2];
    int max     = 0;
    int current = 0;
    for(int i = 0; i < n; i++)
    {
      s                 = br.readLine().split(" ");
      int entered       = Integer.parseInt(s[1]);
      int exited        = Integer.parseInt(s[0]);
      current           = current + (entered - exited);
      if (max < current)
      {
        max = current;
      }
    }
    System.out.print(max);
  }
}
