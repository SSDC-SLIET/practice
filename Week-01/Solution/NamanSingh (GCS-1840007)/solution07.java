import java.util.*;
class problem7
{
    public static void main(String[] args)
    {
        Scanner y=new Scanner(System.in);
        int t=y.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=y.nextInt();
            int a[][]=new int[n][n];
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    a[j][k]=y.nextInt();
                }
            }
             for(int j=0;j<n;j++)
            {
                for(int k=n-1;k>=0;k--)
                {
                    System.out.print(a[k][j]+" ");
        
                }
                }System.out.println();
    }
}}
