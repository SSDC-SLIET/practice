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
	        int a[] = new int[n];
	        for(int i=0;i<n;i++)
	        {
	              a[i] = sc.nextInt();
	        }
	        int x = n/2;
	        int s1 = 0,s2=0;
	        for(int i=0;i<x;i++)
	        {
	            s1 = s1 + a[i];
	        }
	        for(int i=x;i<n;i++)
	        {
	            s2 = s2 + a[i];
	        }
	        int mul = s1*s2;
	        System.out.println(mul);
	    }
	}
}
