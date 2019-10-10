{
import java.util.Scanner;
import java.lang.Math;
class Convert_To_Five
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T>0)
		{
			int N = sc.nextInt();
			System.out.println(new GfG().convertfive(N));
			T--;
		}
		
	}
}
}
/*This is a function problem.You only need to complete the function given below*/
class GfG
{
    int convertfive(int num)
    {
	    int rev=0,temp=0;
	    while(num!=0)
	    {
	        rev = rev*10;
	        temp = num%10;
	        if(temp == 0)
	        {
	            temp = 5;
	        }
	        rev = rev+(temp);
	        num = num/10;
	        
	    }
	    temp = 0;
	    while(rev!=0)
	    {
	        temp = temp*10;
	        temp = temp + rev%10;
	        rev = rev/10;
	    }
	    
	    return temp;
	    
    }
}
