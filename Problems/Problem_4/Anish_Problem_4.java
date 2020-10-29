package hacktoberfest;

import java.util.Scanner;

public class Anish_Problem_4 {

	public static void main(String[] args) {

       Scanner sc = new Scanner (System.in);
		
		int n = sc.nextInt();
		for (int i = 1; i<=n; i++) {
			for (int j = 1; j<=i; j++) {
				int sum = 0;
				sum+=j;
				System.out.print( sum + " ");
			}System.out.println();
	}
	}
}

