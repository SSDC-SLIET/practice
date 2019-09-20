#include <iostream>
#include <bits/stdc++.h>
#include <vector>

int main()
{
    int cases,motu,patlu,size;
    unsigned long long sum_m,sum_p,temp;
    
    
    std::cin >> cases;
    
    while(cases--)
    {
        motu=1,sum_m=0,sum_p=0;
        std::vector<unsigned long long> ice_cream;
        std::cin >> size;
        
        for(int i=0 ; i<size ; i++)
        {
            std::cin >> temp;
            ice_cream.push_back(temp);
        }
        
        sum_m=ice_cream[0];
        sum_p=ice_cream[size-1];
        
        for(int i=1,j=size-1 ; i<j ; NULL)
        {
            if(sum_m<=2*sum_p)
            {
                sum_m+=ice_cream[i++];
                motu++;
            }    
            else
                sum_p+=ice_cream[--j];
            
        }
       
    patlu=size-motu;
    
    std::cout << motu << " " << patlu << std::endl << ((motu>patlu) ? "Motu" : ((patlu>motu) ? "Patlu" : "Tie")) << std::endl;  
            
    }

  return 0;    
}
