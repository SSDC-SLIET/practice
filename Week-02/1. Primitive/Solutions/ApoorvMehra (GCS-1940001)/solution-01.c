#include<stdio.h>

void swap(int * , int *);

int main() {
	short int T;
	int a , b;
	scanf("%hd" , &T);
	while(T--) {
		scanf("%d %d" , &a , &b);
		swap(&a , &b);
	}
	return 0; 
}

void swap(int *a , int *b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	printf("%d %d\n" , *a , *b);
}
