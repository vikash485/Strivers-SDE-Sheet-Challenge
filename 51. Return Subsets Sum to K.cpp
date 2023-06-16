void rec(int i, int k, vector<int> &v,vector<int> &temp, vector<vector<int>> &ans)
{
    if(i==v.size())
    {
        if(k==0 && temp.size()>0)
        {
            ans.push_back(temp);
        }
        return;
    }
    rec(i+1,k,v,temp,ans);
    temp.push_back(v[i]);
    rec(i+1,k-v[i],v,temp,ans);
    temp.pop_back();
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> v, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> temp;
    rec(0,k,v,temp,ans);
    return ans;
}
