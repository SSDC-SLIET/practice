import java.util.*;
class problem1
{
public static void main(String[] args)
{
Scanner y=new Scanner(System.in);
int T=y.nextInt();
for(int i=0;i<T;i++)
{
    
int n1=y.nextInt();
int A[]=new int[n1];
A[0]=y.nextInt();
int max=A[0];
for(int j=1;j<n1;j++)
{
    A[j]=y.nextInt();
    if(A[j]>max)
    max=A[j];
}
int n2=y.nextInt();
int B[]=new int[n2];
B[0]=y.nextInt();
int min=B[0];
for(int j=1;j<n2;j++)
{
    B[j]=y.nextInt();
    if(B[j]<min)
    min=B[j];
}
System.out.println(max*min);
}}}
