#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
    int ans=1;
    map<char,int> mp;
    int n=s.size(),j=0;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
        while(j<=i && mp.size()<(i-j+1))
        {
            mp[s[j]]--;
            if(mp[s[j]]==0)
            mp.erase(s[j]);
            j++;
        }
        ans=max(ans,i-j+1);
    }
    return ans;
}
