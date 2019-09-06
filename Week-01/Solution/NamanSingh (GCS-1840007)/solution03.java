class problem3
{
public static void main(String[] args)
{
Scanner y=new Scanner(System.in);
int t=y.nextInt();
for(int i=0;i<t;i++)
{
    int c=0,f=0;
int n=y.nextInt();
int d=y.nextInt();
int a[]=new int[n];int b[]=new int[n];
if(d%2==0)
c++;
for(int j=0;j<n;j++)
{
    a[j]=y.nextInt();
}
for(int k=0;k<n;k++)
{
    b[k]=y.nextInt();
}
for(int l=0;l<n;l++)
{
if(c==1)
{
    if(a[l]%2!=0)
    f=f+b[l];
}
else
{
    if(a[l]%2==0)
    f=f+b[l];
}
}
System.out.println(f);
}}}
