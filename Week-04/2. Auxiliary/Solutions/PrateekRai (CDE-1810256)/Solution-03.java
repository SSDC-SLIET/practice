/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    
    public static int result(int n,int m){

        if(n<0 || m<0)
        {
            return 0;
        }
        else
        {
            if((n==1 &&m==0) || (n==0&&m==1))
            {
                return 1;
            }
            return (result(n-1,m) + result(n,m-1));
        }
    }
    
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
	    for(int z=0;z<t;z++)
	    {
	        int n = sc.nextInt();
	        int m = sc.nextInt();
	        int temp = result(n,m);
	        System.out.println(temp);
	    }
	}
}
