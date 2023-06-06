#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &v, int s){
   // Write your code here.
   vector<vector<int>> ans;
   unordered_map<int,int> mp;
   for(auto &it:v)
   mp[it]++;
   int n=v.size();
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {
      int temp=s-v[i];
      if(temp==v[i])
      {
         int l=mp[v[i]]-1;
         for(int j=0;j<l;j++)
         {
            ans.push_back({v[i],v[i]});
         }
      }
      else
      {
         if(mp.find(temp)!=mp.end())
         {
            int l=mp[temp],mn=min(v[i],temp),mx=max(v[i],temp);
            for(int j=0;j<l;j++)
            {
               ans.push_back({mn,mx});
            }
         }
      }
      mp[v[i]]--;
      if(mp[v[i]]==0)
      mp.erase(v[i]);
   }
   return ans;
}
