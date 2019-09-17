class problem4
{
public static void main(String[] args)
{
Scanner y=new Scanner(System.in);
int t=y.nextInt();
for(int i=0;i<t;i++)
{
int n=y.nextInt();int f=0;
int a[]=new int[n];
for(int j=0;j<n;j++)
{
a[j]=y.nextInt();
}
for(int k=0;k<n-1;k++)
{
    if(k!=(n-1))
{
    if(a[k]!=a[k+1])
{System.out.println(a[k]);f++;break;}
else
k++;
}
}if(f==0)
System.out.println(a[n-1]);
}
}}
