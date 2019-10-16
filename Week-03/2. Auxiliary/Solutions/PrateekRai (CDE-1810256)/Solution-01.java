 
import java.util.*; 
 
  
class Codechef
{  
    public static void main(String[] args)
    {
    	Scanner sc = new Scanner(System.in);
    	int t = sc.nextInt();
    	for(int j=0;j<t;j++)
    	{
    		long appy = 0;
    		long chef = 0;
    		long n = sc.nextLong();
    		long a = sc.nextLong();
    		long b = sc.nextLong();
    		long k = sc.nextLong();
    		for(int i=1;i<=n;i++)
    		{
    			if(i%a==0 && i%b!=0)
    			{
    				appy++;
    			}
    			else if(i%b==0 && i%a!=0)
    			{
    				chef++;
    			}
    		}
    		long sum = appy+chef;
    		if(sum>=k)
    		{
    			System.out.println("Win");
    		}
    		else
    		{
    			System.out.println("Lose");
    		}
    	}
    }
} 
