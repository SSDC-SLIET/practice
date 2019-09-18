#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strrev(char *);
void swap(char * , char *);

int main() {
	short int T;
	scanf("%hd" , &T);
	while(T--) {
		char *str;
		str = (char *)calloc(1001 , sizeof(char));
		scanf("%s" , str);
		printf("%s\n" , strrev(str));
	}
	return 0;	
}

char *strrev(char *str) {
	short int i = 0 , j = strlen(str) - 1;
	while(i < strlen(str) / 2) 
		swap(&str[i++] , &str[j--]);
	return str;
}

void swap(char *a , char *b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
