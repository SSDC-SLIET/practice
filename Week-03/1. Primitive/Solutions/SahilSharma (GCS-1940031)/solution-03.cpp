#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int cases,arr_size,temp;
    cin >> cases;
    
    while(cases--)
    {
        cin >> arr_size;
        vector<int> vec(arr_size,0);
        
        for(int i=0 ; i<arr_size ; i++)
        {
            cin >> vec[i];
        }
        
        sort(vec.begin(),vec.end());
        cout << vec[arr_size-2]*vec[arr_size-1] << endl ;
        
    }

	return 0;
}
