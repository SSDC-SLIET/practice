#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t; i++){
	    int x,sum=0;
	    scanf("%d",&x);
	    int a[x];
	    for(int j=0; j<x; j++){
	        scanf("%d ",&a[j] );
	        if(a[j]==0)
	        sum++;
	    }
	    printf("%d",sum);
	    printf("\n");
	}
	return 0;
}
