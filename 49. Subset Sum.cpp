#include <bits/stdc++.h>

void rec(int i, int sum, vector<int> &v, vector<int> &ans)
{
    if(i==v.size())
    {
        ans.push_back(sum);
        return;
    }
    rec(i+1,sum,v,ans);
    rec(i+1,sum+v[i],v,ans);
}
vector<int> subsetSum(vector<int> &v)
{
    // Write your code here.
    vector<int> ans;
    rec(0,0,v,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
