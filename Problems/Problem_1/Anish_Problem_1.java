package hacktoberfest;

import java.util.Scanner;

public class Anish_Problem_1 {

	public static void main(String[] args) {

		Scanner sc = new Scanner (System.in);
		System.out.println(" Enter the value of n ");
		int n = sc.nextInt();
		
		switch (n) {
		case 1 : System.out.println(" Thats Modnay! "); break;
		case 2 : System.out.println(" Thats Tuesday! "); break;
		case 3 : System.out.println(" Thats Wednesday! ");break;
		case 4 : System.out.println(" Thats Thursday! "); break;
		case 5 : System.out.println(" Thats Friday! "); break;
		case 6 : System.out.println(" Thats Saturday! "); break;
		case 7 : System.out.println( " Thats Sunday!"); break;
		default : System.out.println(" That does not exist! ");
		}
	}

}
