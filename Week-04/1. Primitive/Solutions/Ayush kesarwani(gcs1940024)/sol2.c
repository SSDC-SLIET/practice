#include <stdio.h>

int main() {
	//code
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
	    int sum=0,x,sum1=0;
	    scanf("%d",&x);
	    int a[x];
	    for(int j=0; j<x; j++){
	        scanf("%d ",&a[j] );
	        if(j<(x/2)){
	            sum+=a[j];
	        }
	        else{
	            sum1+=a[j];
	        }
	           
	    }
	    printf("%d\n",sum1*sum);
	}
	return 0;
}
