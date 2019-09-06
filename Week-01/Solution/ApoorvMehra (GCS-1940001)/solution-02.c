#include<stdio.h>

int found(int a[] , int n , int key) {
	int i;
	for(i = 0 ; i < n ; i++) {
		if(key == a[i])
			return 1;	
	}
	return 0;
}

char arePresent(int a[] , int n , int A , int B) {
	int i;
	for(i = A ; i <= B ; i++) {
		if(!found(a , n , i))
			return 'N';	
	}
	return 'Y';
}

void createArray(int a[] , int n) {
	int i;
	for(i = 0 ; i < n ; i++) {
		scanf("%d" , &a[i]);
	}
}

void printArray(char a[] , int n) {
	int i;
	for(i = 0 ; i < n ; i++) {
		if(a[i] == 'Y')
			printf("Yes\n");
		else
			printf("No\n");
	}
	printf("\n");
}

int main() {
	int i , T , N , A , B;
	scanf("%d" , &T);
	char output[T];
	for(i = 0 ; i < T ; i++) {
		scanf("%d %d %d" , &N , &A , &B);
		int a[N];
		createArray(a , N);
		output[i] = arePresent(a , N , A , B);
	}
	printArray(output , T);
	return 0;
}
