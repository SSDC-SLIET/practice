import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int t= 0;
		if(sc.hasNextInt());
		{
			t = sc.nextInt();
		}
		for(int z=0;z<t;z++)
		{
			int n = 0;
			if(sc.hasNextInt());
			{
				n = sc.nextInt();
			}
			sc.nextLine();
			String s[] = new String [n];
			int a[] = new int[26];
			int b[] = new int[26];
			for(int j = 0; j<26;j++)
			{
				b[j]=0;
			}
			for(int i=0;i<n;i++)
			{
				s[i] = sc.nextLine();
				int c = s[i].length();
				for(int j=0;j<c;j++)
				{
					int x = s[i].charAt(j)-97;
					b[x]++;
				}
				for(int j=0; j<26;j++)
				{
					if(b[j]>0)
					{
						a[j]++;
					}
					b[j]=0;
				}
			}
			int f=0;
			for(int i=0;i<26;i++)
			{
				if(a[i]==n)
				{
					f++;
				}
			}
			System.out.println(f);
		}
	}
}
