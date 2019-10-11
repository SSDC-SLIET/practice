/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		for(int i=0;i<t;i++)
		{
		    
		    int n = sc.nextInt();
		    
		    int s = 1,x;
		    
		    for(int j=1;j<=n;j++)
		    {
		        
		        System.out.print(s+" ");
		        x = n-j;
		        s = s * x/j;
		        
		        
		    }
		    System.out.println();
		    
		}
		
	}
}
