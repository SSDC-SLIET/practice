/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		    int t =sc.nextInt();
		    int i=0;
		    int k=0;
		    for(i=0;i<t;i++)
		    {
		        int n = sc.nextInt();
		        short[] a = new short[n]; 
		        
		        for(k=0;k<n;k++)
		        {
		            a[k] = sc.nextShort();
		        }
		        int max=a[0];
		        int min=a[0];
		        for(k=0;k<n;k++)
		        {
		            if(max<a[k])
		            {
		                max = a[k];
		            }
		            else if(min>a[k])
		            {
		                min = a[k];
		            }
		        }
		        System.out.println(max+" "+min);

		    }
		
		
	}
}
