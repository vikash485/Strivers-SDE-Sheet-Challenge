#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	unordered_map<int,int> m;
	int cnt=n/2;
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
		if(m[arr[i]]>cnt)
		return arr[i];
	}
	return -1;
}
