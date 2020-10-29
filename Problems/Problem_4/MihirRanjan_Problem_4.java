package hacktocberfest;
import java.util.Scanner;


public class ProblemFour {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		
		System.out.print("enter the value of n: ");
		int a= sc.nextInt();
		for ( int i=1 ; i<= a; i++) {
			for ( int j=1; j<=i; j++) {
				System.out.print(j +" ");
			}
			System.out.println();
		}
		
		

	}

}
