package hacktocberfest;
import java.util.Scanner;

public class ProblemSeven {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("enter the value of n: ");
		int a = sc.nextInt();
		int b=0;
		for (int j=1; j<=a; j++) {
			b=b+j;
		}
	System.out.print(b);
	}


}
