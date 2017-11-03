// 41A
// Translation
// Implementation, Strings
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class Translation
{
  static String a = "YES";
  public static void main(String[] args) throws IOException
  {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String s          = br.readLine();
    String l          = br.readLine();
    int index         = s.length() - 1;
    if (s.length() != l.length()){
      a = "NO";
    }
    else
    {
      for(int i = 0; i < s.length(); i++)
      {
        if(s.charAt(i) != l.charAt(index - i))
        {
          a = "NO";
          break;
        }
      }
    }
    System.out.print(a);
  }
}
