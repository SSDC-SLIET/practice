#include<stdio.h>
int main()
{
  int a,b,t;
  scanf("%d",&t);
  while(t)
  {
  scanf("%d %d",&a,&b);
 // printf("\n%d%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("%d %d",a,b);
  printf("\n");
  t--;
  }
  return 0;
}
