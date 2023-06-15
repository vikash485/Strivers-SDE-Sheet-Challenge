int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    vector<int> cnt(2360,0);
    for(int i=0;i<n;i++)
    {
        cnt[at[i]]++;
        cnt[dt[i]+1]--;
    }
    int ans=cnt[0];
    for(int i=1;i<2360;i++)
    {
        cnt[i]+=cnt[i-1];
        ans=max(ans,cnt[i]);
    }
    return ans;
}
