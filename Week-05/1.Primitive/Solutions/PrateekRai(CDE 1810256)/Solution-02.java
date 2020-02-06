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
		    float x = (n-3)/3;
		    float temp = (int)x;
		    int y = (int)x+1;
		    int z = (int)x+2;
		    if(((int)x+y+z)!=n)
		    {
		        System.out.println("-1");
		    }
		    else
		    {
		        System.out.println((int)x+" "+y+" "+z);
		    }
		}
	}
}
