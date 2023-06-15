#include <bits/stdc++.h> 
long getTrappedWater(long *v, int n){
    // Write your code here.
    vector<long> ge(n,0);
    long mx=v[0];
    for(int i=1;i<n-1;i++)
    {
        mx=max(mx,v[i]);
        ge[i]=abs(v[i]-mx);
    }
    mx=v[n-1];
    for(int i=n-2;i>0;i--)
    {
        mx=max(mx,v[i]);
        ge[i]=min(ge[i],abs(v[i]-mx));
    }
    long ans=0;
    for(auto &it:ge)
    ans+=it;
    return ans;
}
