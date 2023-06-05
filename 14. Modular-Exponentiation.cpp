#include <bits/stdc++.h>

int binMultiply(int a, int b, int mod)
{
    int ans=0;
    while(b>0)
    {
        if(b&1)
        {
            ans=(ans+a)%mod;
        }
        a=(a+a)%mod;
        b>>=1;
    }
    return ans;
}

int binaryExp(int a, int b, int mod)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=binMultiply(ans,a,mod);
        }
        a=binMultiply(a,a, mod);
        b>>=1;
    }
    return ans;
}

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	return binaryExp(x,n,m);
}
