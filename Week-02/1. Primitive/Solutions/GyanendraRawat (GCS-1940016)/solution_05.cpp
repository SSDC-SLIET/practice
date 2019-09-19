#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t,i,j;
    cin>>t;
for(i=0;i<t;i++)
{  
    string str;
    cin>>str;
    
    std::reverse(std::begin(str),std::end(str));
    
    cout << str <<endl;
    
    
}

	//code
	return 0;
}
