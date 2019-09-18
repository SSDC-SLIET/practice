#include <stdio.h>

#define MAX 0
#define MIN 1

void createArray(short int * , short int);
short int maxMin(short int * , short int , short int);

int main() {
    short int T , N;
    scanf("%hd" , &T);
    while(T--) {
        scanf("%hd" , &N);
        short int array[N];
        createArray(array , N);
        printf("%hd %hd\n" , maxMin(array , N , MAX) , maxMin(array , N , MIN));
    }
	return 0;
}

void createArray(short int *a , short int n) {
    short int i;
    for(i = 0 ; i < n ; i++)
        scanf("%hd" , &a[i]);
}

short int maxMin(short int *a , short int n , short int is_min) {
    short int i , large , small;
    large = small = a[0];
    for(i = 0 ; i < n ; i++) {
        if(large < a[i])
            large = a[i];
        if(small > a[i])
            small = a[i];
    }
    if(is_min)
        return small;
    else
        return large;
}
