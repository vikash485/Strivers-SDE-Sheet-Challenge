#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int r) 
{
  // Write your code here.
  vector<vector<long long int>> ans(r);
  ans[0].resize(1);
  ans[0][0]=1LL;
  for(int i=1;i<r;i++)
  {
      ans[i].resize(i+1);
      ans[i][0]=ans[i][i]=1LL;
      for(int j=1;j<i;j++)
      {
          ans[i][j]=ans[i-1][j-1]*1LL+ans[i-1][j]*1LL;
      }
  }
  return ans;
}
