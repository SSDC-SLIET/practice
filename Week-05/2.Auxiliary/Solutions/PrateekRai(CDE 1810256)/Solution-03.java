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
		    long n = sc.nextLong();
		    if(n%5==0)
		    {
		        System.out.println("-1");
		    }
		    else
		    {
		        System.out.println(n%5);
		    }
		}
	}
}
