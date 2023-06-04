#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   vector<int> v(3,0);
   for(int i=0;i<n;i++)
   {
      v[arr[i]]++;
   }
   int j=0;
   for(int i=0;i<n;i++)
   {
      while(v[j]==0)
      j++;
      arr[i]=j;
      v[j]--;
   }
}
