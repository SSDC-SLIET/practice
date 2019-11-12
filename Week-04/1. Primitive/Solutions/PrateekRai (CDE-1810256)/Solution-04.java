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
		    int arr[] = new int[n];
		    int m = sc.nextInt();
		    for(int i=0;i<m;i++)
		    {
		        int a = sc.nextInt();
		        int b = sc.nextInt();
		        int k = sc.nextInt();
		        for(int j=a;j<=b;j++)
		        {
		            arr[j] = arr[j]+k;
		        }
		    }
		    java.util.Arrays.sort(arr);
		    System.out.println(arr[n-1]);
		}
	}
}
