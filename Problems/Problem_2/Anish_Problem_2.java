package hacktoberfest;

import java.util.Scanner;

public class Anish_Problem_2 {

	

		static String isDivisible(int n)  
	    { 
	        int temp = n; 
	  
	       
	        while (n > 0) 
	        { 
	            int k = n % 10; 
	  
	             
	            if (temp % k == 0) 
	            { 
	                return "YES"; 
	            } 
	            n /= 10; 
	        } 
	  
	        return "NO"; 
	    } 
	  
	     
	    public static void main(String[] args)  
	    { 
	    	Scanner sc = new Scanner (System.in);
	    	System.out.println(" enter the value on n ");
	        int n = sc.nextInt(); 

	        System.out.println(isDivisible(n));
	    }
	     


	}




