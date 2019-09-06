#include<stdio.h>

unsigned long long int getSingleElement(unsigned long long int a[] , int n) {
	int i;
	i = 0;
	while(i < n - 1) {
		if(a[i] == a[i + 1]) 
			i += 2;
		else
			return a[i];	
	}	
	return a[i];
}

void createArray(unsigned long long int a[] , int n) {
	int i;
	for(i = 0 ; i < n ; i++) {
		scanf("%lld" , &a[i]);
	}
}

void printArray(unsigned long long int a[] , int n) {
	int i;
	for(i = 0 ; i < n ; i++) {
		printf("%lld\n" , a[i]);
	}
}

int main() {

	int i , T , n;
	scanf("%d" , &T);
	unsigned long long int output[T];
	for(i = 0 ; i < T ; i++) {
		scanf("%d" , &n);
		unsigned long long int a[n];
		createArray(a , n);
		output[i] = getSingleElement(a , n);
	}
	printArray(output , T);
	return 0;
}
