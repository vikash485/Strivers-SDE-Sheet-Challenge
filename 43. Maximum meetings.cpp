#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<vector<int>> v;
    int n=start.size();
    for(int i=0;i<n;i++)
    {
        v.push_back({start[i],end[i],i+1});
    }
    sort(v.begin(),v.end(),[](vector<int> &a, vector<int> &b)->bool{
        if(a[1]==b[1])
        {
            return a[2]<b[2];
        }
        return a[1]<b[1];
    });
    vector<int> ans;
    int i=1,e=v[0][1];
    ans.push_back(v[0][2]);
    while(i<n)
    {
        if(v[i][0]>e)
        {
            ans.push_back(v[i][2]);
            e=v[i][1];
        }
        i++;
    }   
    return ans;
}
