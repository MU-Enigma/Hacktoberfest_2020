package hacktoberfest;

import java.util.Scanner;

public class AnishProblem7 {

	public static void main(String[] args) {

		Scanner sc = new Scanner (System.in);
		
		
		 int n = sc.nextInt(); int count = 1;int total = 0;

	       while(count <= n)
	       {
	           total = total + count;
	           count++;
	       }

	       System.out.println("Sum of numbers is: "+total);
	
	}

}
