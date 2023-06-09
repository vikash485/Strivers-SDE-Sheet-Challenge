#include <bits/stdc++.h>

int subarraysXor(vector<int> &v, int x)
{
    //    Write your code here.
    map<int,int> mp;
    mp[0]=1;
    int xr=0,n=v.size(),ans=0;
    for(int i=0;i<n;i++)
    {
        xr^=v[i];
        int temp=xr^x;
        if(mp.find(temp)!=mp.end())
        {
            ans+=mp[temp];
        }
        mp[xr]++;
    }
    return ans;
}
