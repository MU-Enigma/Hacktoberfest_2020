package hacktocberfest;
import java.util.Scanner;


public class ProblemThree {
	
	

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		
		System.out.print("enter a: ");
		int a = sc.nextInt();
		System.out.print("enter b: ");
		int b = sc.nextInt();
		System.out.print("enter c: ");
		int c = sc.nextInt();
		if ( a*a == b*b + c*c) {
			System.out.print(a +","+ b +"," +c+ ",");
		}else if ( b*b ==  a*a + c*c) {
			System.out.print(b +","+ a + "," + c);
		}else if (c*c == a*a + b*b) {
			System.out.print(c +","+ a + "," + b);
		}else {
			System.out.print("NOPE!");
		}
			
			
		
		
		

	}

}
