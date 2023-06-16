#include <bits/stdc++.h> 

void rec(int i, vector<int> &v, vector<int> temp,set<vector<int>> &st)
{
    if(i==v.size())
    {
        sort(temp.begin(),temp.end());
        st.insert(temp);
        return;
    }
    rec(i+1,v,temp,st);
    temp.push_back(v[i]);
    rec(i+1,v,temp,st);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &v)
{
    // Write your code here.
    set<vector<int>> st;
    vector<int> temp;
    rec(0,v,temp,st);
    vector<vector<int>> ans;
    for(auto &it:st)
    ans.push_back(it);
    return ans;
}
