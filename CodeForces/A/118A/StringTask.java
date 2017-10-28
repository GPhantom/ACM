import java.util.Scanner;
public class StringTask { // 118A
	public static void main(String[]args){
		w();
	}
	public static void w(){
		Scanner scan = new Scanner(System.in);
		String a = scan.nextLine();
		String answer = a.toLowerCase();
		for (int i = 0;i<answer.length();i++){
			char c = answer.charAt(i);
			if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i'){
				System.out.print("." + c);
			}
			else{
				continue;
			}
		}
	}

}
