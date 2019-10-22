
// Driver program to test above function
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
}
}
/*This is a function problem.You only need to complete the function given below*/
/*you are required to complete this method*/
int convertFive(int n)
{
    int r,p;
    p=0;
    int i;
    i=0;
    while(n!=0)
    {
    r=n%10;
    n=n/10;
    if(r==0)
    r=5;
    p=p+r*pow(10,i);
    i++;
    }
    return p;
//Your code here
