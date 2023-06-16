#include<bits/stdc++.h>
void rec(int i, int k, vector<int> &v,vector<int> &temp, vector<vector<int>> &ans)
{
	if(k==0)
	{
		ans.push_back(temp);
		return;
	}
	for(int j=i;j<v.size();j++)
	{
		if(j>i && v[j]==v[j-1])
		continue;
		if(v[j]>k)
		break;
		temp.push_back(v[j]);
		rec(j+1,k - v[j],v,temp,ans);
		temp.pop_back();
	}
}
vector<vector<int>> combinationSum2(vector<int> &v, int n, int k)
{
	// Write your code here.
	sort(v.begin(),v.end());
	vector<vector<int>> ans;
	vector<int> temp;
	rec(0,k,v,temp,ans);
	return ans;
}
