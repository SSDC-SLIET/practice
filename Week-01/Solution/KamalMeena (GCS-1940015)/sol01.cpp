#include<stdio.h>
#include<iostream>
int main()
{
    int i,n1,n2,t,j,max,min,k,l;
    scanf("%d",&t);
    int product[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n1);
        int a[n1];
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[j]);
        }

        scanf("%d",&n2);
        int b[n2];
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[j]);
        }

    max=a[0];
    min=b[0];

    for(k=0;k<n1;k++)
    {
        if(a[k]>max)
        {
            max=a[k];
        }
    }
    for(l=0;l<n2;l++)
    {
        if(b[l]<min)
        {
            min=b[l];
        }
     }
       product[i]=max*min;
    }

     for(l=0;l<t;l++)
    {
        printf("%d\n",product[l]);
     }

}


