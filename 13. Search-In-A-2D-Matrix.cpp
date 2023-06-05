bool searchMatrix(vector<vector<int>>& v, int t) {
    int n=v.size(),m=v[0].size();
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid][0]>t)
        {
            high=mid-1;
        }
        else if(t>v[mid][m-1])
        {
            low=mid+1;
        }
        else
        {
            int l=0,h=m-1;
            while(l<=h)
            {
                int md=(l+h)/2;
                if(v[mid][md]==t)
                return true;
                else if(v[mid][md]<t)
                l=md+1;
                else
                h=md-1;
            }
            return false;
        }
    }
    return false;
}
