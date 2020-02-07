/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int z=0;z<t;z++)
		{
		    int n = sc.nextInt();
		    int a[][] = new int[n][n];
		    for(int i=0;i<n;i++)
		    {
		        for(int j=0;j<n;j++)
		        {
		            a[i][j] = sc.nextInt();
		        }
		    }
		    for(int i=0;i<n;i++)
            {
                for(int j=n-1;j>=0;j--)
                {
                    System.out.print(a[j][i]+" ");
                }
            }
            System.out.println();
		}
	}
}
