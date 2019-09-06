class problem2
{
    public static void main(String[] args)
    {
Scanner y=new Scanner(System.in);
int t=y.nextInt();int c=0;
for(int i=0;i<t;i++)
{
int n=y.nextInt();
int A=y.nextInt();
int B=y.nextInt();
int a[]=new int[n];
for(int j=0;j<n;j++)
{
    a[j]=y.nextInt();
    if(a[j]>=A&&a[j]<=B)
    c++;
}
if(c==(B-A+1))
System.out.println("Yes");
else
System.out.println("No");
}
}
}
