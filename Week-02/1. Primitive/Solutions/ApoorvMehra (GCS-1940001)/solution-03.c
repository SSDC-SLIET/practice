#include <stdio.h>

void createArray(short int * , short int);
void printArray(short int * , short int);
void reverse(short int * , short int);
void swap(short int * , short int *);

int main() {
    short int T , N;
    scanf("%hd" , &T);
    while(T--) {
        scanf("%hd" , &N);
        short int array[N];
        createArray(array , N);
        reverse(array , N);
        printArray(array , N);
    }
    return 0;
}

void createArray(short int *a , short int n) {
    short int i;
    for(i = 0 ; i < n ; i++)
        scanf("%d" , &a[i]);
}

void printArray(short int *a , short int n) {
    short int i;
    for(i = 0 ; i < n ; i++)
        printf("%d " , a[i]);
    printf("\n");
}

void reverse(short int *a , short int n) {
    short int i = 0, j = n - 1;
    while(i < n / 2) 
        swap(&a[i++] , &a[j--]);
}

void swap(short int *a , short int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
