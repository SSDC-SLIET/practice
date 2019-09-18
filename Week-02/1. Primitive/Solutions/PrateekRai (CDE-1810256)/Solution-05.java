
import java.io.*;
import java.lang.*;
import java.util.*;

public class Solution{

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int s = sc.nextInt();
		for(int j=0;j<=s;j++)
		{
			String a = new String();
			
			a = sc.nextLine();
			
			int x = a.length();
			
			for(int i=x-1;i>=0;i--)
			{
				System.out.print(a.charAt(i));
				if(i==0)
				{
					System.out.println();
				}
			}
	
		}
	}

}
