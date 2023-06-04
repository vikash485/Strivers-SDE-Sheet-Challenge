#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &v, int n)
{
    //  Write your code here.
    int ind=-1;
    for(int i=n-1;i>0;i--)
    {
        if(v[i-1]<v[i])
        {
            ind=i-1;
            break;
        }
    }
    if(ind==-1)
    {
        reverse(v.begin(),v.end());
        return v;
    }
    int pos=-1;
    for(int i=n-1;i>ind;i--)
    {
        if(v[i]>v[ind])
        {
            pos=i;
            break;
        }
    }
    swap(v[ind],v[pos]);
    reverse(v.begin()+ind+1,v.end());
    return v;
}
