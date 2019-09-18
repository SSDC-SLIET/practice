#include <iostream>
#include <bits/stdc++.h>
#include <vector>

int main()
{
    int cases,motu,patlu,size;
    unsigned long long temp;
    
    double sum,vec_sum;
    
    std::cin >> cases;
    
    while(cases--)
    {
        motu=1,sum=0,vec_sum=0;
        std::vector<unsigned long long> ice_cream;
        std::cin >> size;
        
        for(int i=0 ; i<size ;i++)
        {
            std::cin >> temp;
            ice_cream.push_back(temp);
            vec_sum+=temp;
        }
        
        sum=ice_cream[0];
        
        for(int i=1 ; i<size-1 ; i++)
        {
            sum+=ice_cream[i];
            motu++;
            if(sum > 2*vec_sum/3)
            {
            sum-=ice_cream[i];
            if(sum+2*((float)ice_cream[i])/3 <= 2*vec_sum/3)
            break;
            else
            {
                motu--;
                break;
            }
            }
        }
       
    patlu=size-motu;
    
    std::cout << motu << " " << patlu << std::endl << ((motu>patlu) ? "Motu" : ((patlu>motu) ? "Patlu" : "Tie")) << std::endl;  
            
    }

  return 0;    
}
