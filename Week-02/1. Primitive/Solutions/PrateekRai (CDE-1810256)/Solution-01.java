/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int t =sc.nextInt();
		
		for(int i=0;i<t;i++)
		{
		    
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    
		    a = a+b;
		    b = a-b;
		    a = a-b;
		    
		    System.out.println(a+" "+b);
		    
		}
		
	}
}
