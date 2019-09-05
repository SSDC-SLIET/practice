#include <stdio.h>

int main() {
	long int n1,n2,max,min,i,t,j;
	scanf("%ld",&t);
	for(j=0;j<t;j++)
		{
	            scanf("%ld",&n1);
	            long int a[n1];
	            for(i=0;i<n1;i++)
	            {
	                scanf("%ld", &a[i]);
	            }
	            scanf("%ld", &n2);
	            long int b[n2];
	            for(i=0;i<n2;i++)
	            {
	                scanf("%ld", &b[i]);
	            }
	            max = a[0];
	            for(i=0;i<n1;i++)
	            {
	                if(a[i] > max)
	                {
	                    max = a[i];
	            	}
	            }
	            min = b[0];
	            for(i=0;i<n2;i++)
	            {
	                if(b[i] < min)
	                {
	                    min = b[i];
	                }
	            }
	            int result;
	            result = (max*min);
    	    printf("%d\n",result);
    	    fflush(stdin);
    	}
    return 0;
}
