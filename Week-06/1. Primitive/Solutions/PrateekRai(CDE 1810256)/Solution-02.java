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
			int sum = 0;
			int a[] = new int[1000];
			for(int i=0,j=0;i<2000;i++)
			{
				if(i%2!=0)
				{
					a[j] = i;
					j++;
				}
			}
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<=i;j++)
				{
					sum = sum+a[j];
				}
			}
			System.out.println(sum);
		}
	}
}
