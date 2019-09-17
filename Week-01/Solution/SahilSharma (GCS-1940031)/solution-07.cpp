#include <iostream>
using namespace std;

int main()
{
    int cases,size;
    scanf("%d",&cases);

    for(int t=0;t<cases;t++)
    {
        scanf("%d",&size);
        int array[size][size];

        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                scanf("%d",&array[i][j]);
            }
        }

        for(int j=0;j<size;j++)
        {
            for(int i=size-1;i>=0;i--)
            {
                printf("%d ",array[i][j]);
            }
        }
     printf("\n");
    }
    return 0;
}
