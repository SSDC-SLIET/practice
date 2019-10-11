#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int cases,arr_size,count,sum;
    
    cin >> cases;
    
    while(cases--)
    {
        count=0;
        cin >> arr_size >> sum;
        vector<int> vec(arr_size);
        
        for(int i=0 ; i<arr_size ; i++)
            cin >> vec[i];
        
        sort(vec.begin(),vec.end());
        
        for(int i=0 ; i<arr_size ; i++)
        {
            for(int j=i+1 ; j<arr_size ; j++)
                if(vec[i]+vec[j] == sum)
                    count++;
        }
        
        cout << count << endl;
    }
    
	return 0;
}
