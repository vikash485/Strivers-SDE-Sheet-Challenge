#include <bits/stdc++.h> 
vector<vector<string>> ans;
bool check(string &s)
{
    string rev=s;
    reverse(rev.begin(),rev.end());
    return rev==s;
}
void rec(string s, vector<string> &temp)
{
    int n=s.size();
    if(n==0)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=1;i<=n;i++)
    {
        string res=s.substr(0,i);
        if(!check(res))
        continue;
        temp.push_back(res);
        string rem="";
        if(i<n)
        rem=s.substr(i);
        rec(rem,temp);
        temp.pop_back();
    }
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<string> temp;
    rec(s,temp);
    return ans;
}
