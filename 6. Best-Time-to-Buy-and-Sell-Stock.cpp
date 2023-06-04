#include <bits/stdc++.h> 
int maximumProfit(vector<int> &v){
    // Write your code here.
    int ans=0,mini=v[0],n=v.size();
    for(int i=1;i<n;i++)
    {
        ans=max(ans,v[i]-mini);
        mini=min(mini,v[i]);
    }
    return ans;
}
