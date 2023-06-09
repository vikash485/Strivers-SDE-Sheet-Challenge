#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > v) {

  // Write your code here
  unordered_map<int,int> mp;
  mp[0]=-1;
  int sum=0,ans=0,n=v.size();
  for(int i=0;i<n;i++)
  {
    sum+=v[i];
    if(mp.find(sum)!=mp.end())
    {
      ans=max(ans,i-mp[sum]);
    }
    else
    mp[sum]=i;
  }
  return ans;
}
