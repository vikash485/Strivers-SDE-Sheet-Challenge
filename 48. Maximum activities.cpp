#include <bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<vector<int>> v;
    int n=start.size();
    for(int i=0;i<n;i++)
    {
        v.push_back({start[i],end[i]});
    }
    sort(v.begin(),v.end(),[](vector<int> &a, vector<int> &b)->bool{
        if(a[1]==b[1])
        {
            return a[0]>b[0];
        }
        return a[1]<b[1];
    });
    int ans=1;
    int i=1,e=v[0][1];
    while(i<n)
    {
        if(v[i][0]>=e)
        {
            ans++;
            e=v[i][1];
        }
        i++;
    }   
    return ans;
}
