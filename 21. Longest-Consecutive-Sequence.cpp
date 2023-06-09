#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &v, int n) {
    // Write your code here.
    unordered_map<int,bool> mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]=true;
    }
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(mp.find(v[i]-1)!=mp.end())
        continue;
        int cnt=1,val=v[i]+1;
        while(mp.find(val)!=mp.end())
        {
            val++;
            cnt++;
        }
        ans=max(ans,cnt);
    }
    return ans;
}
