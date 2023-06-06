#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	int ans=0;
	ordered_set os;
	os.insert(arr[n-1]);
	for(int i=n-2;i>=0;i--)
	{
		int val=(arr[i]+1)/2;
		ans+=os.order_of_key(val);
		os.insert(arr[i]);
	}
	return ans;
}
