#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> ans;
    unordered_map<int,int> mp;
    int cnt=arr.size()/3;
    for(auto &it:arr)
    {
        mp[it]++;
    }
    for(auto &i:mp)
    {
        if(i.second>cnt)
        ans.push_back(i.first);
    }
    return ans;
}
