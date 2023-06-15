#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	// Write your code here.
	sort(nums.begin(),nums.end());
	set<vector<int>> s;
	vector<vector<int>> ans;
	for(int i=0;i<n-2;i++)
	{
		int j=i+1,k=n-1;
		while(j<k)
		{
			int temp=nums[i]+nums[j]+nums[k];
			if(temp==K)
			{
				s.insert({nums[i],nums[j],nums[k]});
				j++;
			}
			else if(temp>K)
			{
				k--;
			}
			else
				j++;
		}
	}
	for(auto it:s)
		ans.push_back(it);
	return ans;
}
