#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& v, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(v.begin(),v.end(),[](pair<int,int> &p, pair<int,int> &q)->bool{
        double a=p.second*1.0/p.first,b=q.second*1.0/q.first;
        if(a>=b)
        return true;
        return false;
    });
    int i=0;
    double ans=0;
    while(w && i<n)
    {
        auto p=v[i];
        if(p.first<=w)
        {
            w-=p.first;
            ans+=p.second;
        }
        else
        {
            ans+=(p.second*1.0/p.first)*w;
            w=0;
        }
        i++;
    }
    return ans;
}
