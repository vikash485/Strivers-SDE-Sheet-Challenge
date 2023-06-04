#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &v)
{
	// Write your code here.
	int n=v.size(),m=v[0].size();
	bool fr=false,fc=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(v[i][j]==0)
			{
				v[i][0]=0;
				if(i==0)
				fr=true;
				v[0][j]=0;
				if(j==0)
				fc=true;
			}
		}
	}
	for(int i=1;i<n;i++)
	{
		if(v[i][0]==0)
		{
			for(int j=1;j<m;j++)
			{
				v[i][j]=0;
			}
		}
	}
	for(int i=1;i<m;i++)
	{
		if(v[0][i]==0)
		{
			for(int j=1;j<n;j++)
			{
				v[j][i]=0;
			}
		}
	}
	
	if(fr)
	{
		for(int i=0;i<m;i++)
		{
			v[0][i]=0;
		}
	}
	if(fc)
	{
		for(int i=0;i<n;i++)
		{
			v[i][0]=0;
		}
	}
}
