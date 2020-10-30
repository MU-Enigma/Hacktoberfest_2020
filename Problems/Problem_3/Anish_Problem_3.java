package hacktoberfest;

import java.util.Scanner;

public class Anish_Problem_3 {

	public static void main(String[] args) {

		Scanner sc = new Scanner (System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		
		if (a*a == b*b+c*c) {
			System.out.print(a + " ");
			System.out.print(b+ " ");
			System.out.print(c+ " ");
		} else if ( b*b==a*a+c*c) {
			System.out.print(b + " ");
			System.out.print(a+ " ");
			System.out.print(c+ " ");
			
		} else if ( c*c == b*b+a*a) {
			System.out.print(c+ " ");
			System.out.print(a+ " ");
			System.out.print(b+ " ");
			
		}else {
			System.out.println(" Nope!");
		}
	}

}
