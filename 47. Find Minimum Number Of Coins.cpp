#include <bits/stdc++.h> 
int findMinimumCoins(int a) 
{
    // Write your code here
    vector<int> v={1,2,5,10,20,50,100,500,1000};
    int cnt=0;
    while(a)
    {
        auto it=upper_bound(v.begin(),v.end(),a);
        it--;
        a-=(*it);
        cnt++;
    }
    return cnt;
}
