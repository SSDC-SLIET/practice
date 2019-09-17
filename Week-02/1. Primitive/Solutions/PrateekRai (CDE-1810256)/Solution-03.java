/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class Solution{
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    int n = sc.nextInt();
		    
		    int[] a = new int[n];
		    int[] b = new int[n];
		    
		    for(int j=0;j<a.length;j++)
		    {
		        a[j] = sc.nextInt();
		    }
		    for(int j=n-1;j>=0;j--)
		    {
		        System.out.print(a[j]+" ");
		    }
		System.out.println();
	}
}
}
