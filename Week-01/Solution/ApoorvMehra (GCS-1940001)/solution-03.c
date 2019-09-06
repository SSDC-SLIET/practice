#include<stdio.h>

#define ODD 1
#define EVEN 2

void check(int C[] , int P[] , int n , int output[] , int i , int state) {
	int j , sum = 0;
	if(state == ODD) {
		for(j = 0 ; j < n ; j++) {
			if(C[j] % 2 != 0)
				sum += P[j]; 	
		}
		output[i] = sum;
	}
	else {
		for(j = 0 ; j < n ; j++) {
			if(C[j] % 2 == 0)
				sum += P[j]; 	
		}
		output[i] = sum;
	}
}

void createArray(int a[] , int n) {
	int i;
	for(i = 0 ; i < n ; i++) {
		scanf("%d" , &a[i]);
	}
}

void printArray(int a[] , int n) {
	int i;
	for(i = 0 ; i < n ; i++) {
		printf("%d\n" , a[i]);
	}
}

int main() {
	int i , T , N , D;
	scanf("%d" , &T);
	int output[T];
	for(i = 0 ; i < T ; i++) {
		scanf("%d %d" , &N , &D);
		int C[N];
		int P[N];
		createArray(C , N);
		createArray(P , N);
		if(D % 2 == 0) 
			check(C , P , N , output , i , ODD);
		else
			check(C , P , N , output , i , EVEN);
	}
	printArray(output , T);
	return 0;
}
