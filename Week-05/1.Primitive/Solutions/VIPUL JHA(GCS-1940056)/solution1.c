#include <stdio.h>

int main() {
	int t,i,j,k,n,x;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
	    scanf("%d%d",&i,&j);
	    n=(i+j)/12;
	    x=(i+j)-(12*n);
	    if(i+j<12){
	    printf("%d",(i+j));
	    printf("\n");
	    }
	    else{
	        if(i+j>=12)
	        printf("%d",x);
	        printf("\n");
	    }
	}
	return 0;
}
