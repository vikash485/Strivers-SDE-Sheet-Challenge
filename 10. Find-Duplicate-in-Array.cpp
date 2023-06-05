#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int,int> mp;
	for(auto &it:arr)
	{
		if(mp.find(it)==mp.end())
		{
			mp[it]++;
		}
		else
		return it;
	}
	return 0;
}
