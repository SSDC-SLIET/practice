/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int j=0;j<t;j++)
		{
		    int n = sc.nextInt();
		    int s = sc.nextInt();
		    int a[] = new int[n];
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    java.util.Arrays.sort(a);
		    int i=0,k=n-1,count=0;
		    for(i=0;i<n;i++)
		    {
		        for(k=i;k<n;k++)
		        {
		            if(i!=k)
		            {
		                if((a[i]+a[k])==s)
		                {
		                    count++;
		                }
		            }
		        }
		    }
		    System.out.println(count);
		}
	}
}
