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
		    int a[] = new int[n];
		    for(int j=0;j<n;j++)
		    {
		        a[j] = sc.nextInt();
		    }
		    java.util.Arrays.sort(a);
		    int product = a[n-1]*a[n-2];
		    System.out.println(product);
		}
	}
}
