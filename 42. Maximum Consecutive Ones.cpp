int longestSubSeg(vector<int> &v , int n, int k){
    // Write your code here.
    int zero=0,ans=0,start=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        zero++;
        while(start<=i && zero>k)
        {
            if(v[start++]==0)
            zero--;
        }
        ans=max(ans,i-start+1);
    }
    return ans;
}
