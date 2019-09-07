#include<stdio.h>

#define M 10

void rotate(int a[M][M] , int n) {
	int i , j , k = n - 1 , temp , p;
	for(i = 0 ; i < n ; i++) {
		p = k;
		for(j = i ; j < k ; j++) {
			temp = a[i][j];
			a[i][j] = a[j][k];
			a[j][k] = temp; 
			temp = a[i][j];
			a[i][j] = a[k][p];
			a[k][p] = temp;
			temp = a[i][j];
			a[i][j] = a[p][i];
			a[p][i] = temp;
			--p;		
		}
	--k;
	}
}

void createMatrix(int a[M][M] , int n) {
	int i , j;
	for(i = 0 ; i < n ; i++) {
		for(j = 0 ; j < n ; j++) {
			scanf("%d" , &a[i][j]);
		}
	}
}

void printMatrix(int a[M][M] , int n) {
	int i , j;
	for(i = 0 ; i < n ; i++) {
		for(j = 0 ; j < n ; j++) {
			printf("%d " , a[i][j]);
		}
	}
	printf("\n");
}

int main() {
	
	int i , N , T;
	scanf("%d" , &T);
	for(i = 0 ; i < T ; i++) {
		scanf("%d" , &N);
		int a[M][M];
		createMatrix(a , N);
		rotate(a , N);
		printMatrix(a , N);	
	}	
	return 0;
}
