/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
		    t--;
		    int n = sc.nextInt();
		    int a[][] = new int[n][n];
		    for(int i=0;i<n;i++)
		    {
		        for(int j=0;j<n;j++)
		        {
		            a[i][j] = sc.nextInt();
		        }
		    }
		    int suml = 0;
		    int sumr = 0;
		    for(int i=0,j=0,k=n-1;i<n;i++,j++,k--)
		    {
		        suml = suml+a[i][j];
		        sumr = sumr+a[i][k];
		    }
		    System.out.println(Math.abs(suml-sumr));
		}
	}
}
