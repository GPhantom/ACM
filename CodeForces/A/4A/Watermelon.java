import java.util.Scanner;
public class Watermelon { // 4A
	public static void main(String[]args){
		System.out.println(w());
	}
	public static String w(){
		Scanner scan = new Scanner(System.in);
		int answer = scan.nextInt();
		return ((answer != 2) && answer % 2 == 0)? "YES" : "NO";
	}

}
