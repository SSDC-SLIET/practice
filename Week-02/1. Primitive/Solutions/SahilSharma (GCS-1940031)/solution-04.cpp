#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int cases,max,min,temp,size;
	
	cin >> cases;
	while(cases--)
	{
	     max=0 , min=101;
	     vector<int> vec;
	     
	     cin >> size;
	     
	     while(size--)
	     {
	         cin >> temp;
	         vec.push_back(temp);
	         
	         if(temp > max)
	         max = temp;
	         
	         if(temp < min)
	         min = temp;
	     }
	     
	     cout << max << " " << min << endl; 

	}
	
	
	return 0;
}
