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
		    int num1 = sc.nextInt();
		    int num2 = sc.nextInt();
		    int sum = (num1+num2)%12;
		    System.out.println(sum);
		}
	}
}
