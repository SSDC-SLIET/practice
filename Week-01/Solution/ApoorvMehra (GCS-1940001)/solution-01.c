#include<stdio.h>

int maximum(int a[] , int n) {
	int i , max = a[0];
	for(i = 1; i < n; i++) {
		if(a[i] > max)
			max = a[i];	
	}
	return max;
}

int minimum(int a[] , int n) {
	int i , min = a[0];
	for(i = 1; i < n; i++) {
		if(a[i] < min)
			min = a[i];	
	}
	return min;
}

int printArray(int a[] , int n) {
	int i;
	for(i = 0; i < n; i++) 
		printf("%d\n", a[i]);
	
}

int createArray(int a[] , int n) {
	int i;
	for(i = 0; i < n; i++) 
		scanf("%d", &a[i]);
}


int main() {

	int T , n1 , n2 , i;
	scanf("%d" , &T);
	int sol[T];
	for(i = 0; i < T; i++)  {
		scanf("%d" , &n1);
		int a[n1];
		createArray(a , n1);
		scanf("%d" , &n2);
		int b[n2];
		createArray(b , n2);
		sol[i] = maximum(a , n1) * minimum(b , n2);
	}
	printArray(sol , T);
}
