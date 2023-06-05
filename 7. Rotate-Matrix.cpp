#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    if(n==1 || m==1)
    return;
    int u=0, d=n-1, l=0, r=m-1;
    while(u<d && l<r)
    {
        int temp=mat[l][u];
        for(int i=u;i<d;i++)
            mat[i][l]=mat[i+1][l];

        for(int i=l;i<r;i++)
            mat[d][i]=mat[d][i+1];

        for(int i=d;i>u;i--)
            mat[i][r]=mat[i-1][r];

        for(int i=r;i>l+1;i--)
            mat[u][i]=mat[u][i - 1];

        mat[u][l+1]=temp;
        u++, d--, l++, r--;
    }
}
