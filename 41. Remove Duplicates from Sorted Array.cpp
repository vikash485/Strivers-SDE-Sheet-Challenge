int removeDuplicates(vector<int> &v, int n) {
	// Write your code here.
	int ind=1;
	for(int i=1;i<n;i++)
	{
		if(v[i]!=v[i-1])
		{
			v[ind++]=v[i];
		}
	}
	return ind;
}
