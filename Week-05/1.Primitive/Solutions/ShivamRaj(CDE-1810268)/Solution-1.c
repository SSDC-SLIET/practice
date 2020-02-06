#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {

        int num1,num2;
        scanf("%d",&num1);
        scanf("%d",&num2);
        int sum=0;
        sum=num1+num2;
    
            printf("%d",sum%12);
            printf("\n");
    }
        return 0;
            

}
