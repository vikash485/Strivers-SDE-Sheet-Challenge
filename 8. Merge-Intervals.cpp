#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &v)
{
    // Write your code here.
    sort(v.begin(),v.end(),[](vector<int> &a, vector<int> &b)->bool{
        if(a[0]==b[0])
        return a[1]>b[1];
        return a[0]<b[0];
    });
    vector<vector<int>> ans;
    int start=v[0][0],end=v[0][1],i=1,n=v.size();
    while(i<n)
    {
        if(v[i][0]<=end)
        {
            start=min({start,v[i][0],v[i][1]});
            end=max({end,v[i][1],v[i][0]});
        }
        else
        {
            ans.push_back({start,end});
            start=v[i][0];
            end=v[i][1];
        }
        i++;
    }
    ans.push_back({start,end});
    return ans;
}
