#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<int> cnt(n+1,0);
	for(auto &it:arr)
	cnt[it]++;
	pair<int,int> ans;
	for(int i=1;i<=n;i++)
	{
		if(cnt[i]==0)
		ans.first=i;
		if(cnt[i]==2)
		ans.second=i;
	}
	return ans;
}
