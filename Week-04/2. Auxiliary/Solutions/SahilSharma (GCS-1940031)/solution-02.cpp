vector<string> bigSorting(vector<string> unsorted) 
{
   vector<vector<string>> sorted(1000000);
   vector<string> ans;
   for(auto it=unsorted.begin() ; it!=unsorted.end() ; it++)
       sorted[(*it).size()].push_back(*it);

   for(int i=0 ; i<1000000 ; i++)
       if(sorted[i].size()>0)
          sort(sorted[i].begin(),sorted[i].end());

   for(int i=0 ; i<1000000 ; i++)
      for(int j=0 ; j<sorted[i].size() ; j++)
          ans.push_back(sorted[i][j]);
    return ans;      
}
