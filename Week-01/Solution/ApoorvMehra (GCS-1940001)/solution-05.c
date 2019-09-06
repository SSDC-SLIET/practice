#include<stdio.h>

int found(int a[] , int min , int max , int key) {
	int mid;
	while(min <= max) {
		mid = (min + max) / 2;	
		if(key == a[mid])
			return 1;
		else if(key < a[mid])
			max = mid - 1;
		else
			min = mid + 1;
	}
	return 0;
}

void checkSum(int a[] , int n , int K) {
	int difference , i , flag = 1;
	for(i = 0 ; i < n ; i++) {
		difference = K - a[i];
		if(found(a , i + 1 , n - 1 , difference)) {
			flag = 0;
			printf("%d %d %d\n" , a[i] , difference , K);	
		}
	}
	if(flag)
		printf("%d\n" , -1);

}

void createArray(int a[] , int n) {
	int i;
	for(i = 0 ; i < n ; i++) {
		scanf("%d" , &a[i]);
	}
}

int main() {
	int i , T , K , N;
	scanf("%d" , &T);
	for(i = 0 ; i < T ; i++) {
		scanf("%d" , &N);
		int a[N];
		createArray(a , N);
		scanf("%d" , &K);
		checkSum(a , N , K);
	}
	return 0;
}
