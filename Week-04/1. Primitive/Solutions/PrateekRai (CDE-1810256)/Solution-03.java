/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		    int t=sc.nextInt();
		    for(int z=0;z<t;z++)
		    {
		        int n = sc.nextInt();
		        int a[] = new int[n];
		        for(int i=0;i<n;i++)
		        {
		            a[i] = sc.nextInt();
		        }
		        int count = 0;
		        for(int i=n-1;i>=0;i--)
		        {
		            if(a[i]==0)
		            {
		                count++;
		            }
		            else
		            {
		                break;
		            }
		        }
		        System.out.println(count);
		    }
	}
}
