
/*This is a function problem.You only need to complete the function given below*/
/*you are required to complete this method*/
int convertFive(int n)
{
unsigned int sum=0,r=0;
		
		while(n>0){
			r=n%10;
			if(r==0){
				r=5;
			}
			sum=sum*10+r;
			n=n/10;
		}
		while(sum>0){
			r=sum%10;
			
			n=n*10+r;
			sum=sum/10;
		}
		return n;
}
