#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    
	int cases,size,temp;
	cin >> cases;
	
	while(cases--)
	{
	   vector<int> vec; 
	   cin >> size;
	   
	   while(size--)
	   {
	       cin >> temp;
	       vec.push_back(temp);
	   }
	   
	   reverse(vec.begin(),vec.end());
	   
	   for(vector<int>:: iterator it=vec.begin() ; it!=vec.end() ; ++it)
	                cout << *it << " ";
	   
	   cout << endl;
	}
	
	return 0;
}
