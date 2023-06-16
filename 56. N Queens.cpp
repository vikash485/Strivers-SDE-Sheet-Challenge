bool check(int &r,int &c,int &n,vector<vector<int>> &board)
{
    int cr=r,cc=c;
    while(cr>=0 && cc>=0)
    {
        if(board[cr][cc]==1)
        return false;
        cr--;cc--;
    }
    cr=r;cc=c;
    while(cc>=0)
    {
        if(board[cr][cc]==1)
        return false;
        cc--;
    }
    cr=r;cc=c;
    while(cr<n && cc>=0)
    {
        if(board[cr][cc]==1)
        return false;
        cr++;cc--;
    }
    return true;
}
void rec(int j,int &n,vector<vector<int>> &board, vector<vector<int>> &ans)
{
    if(j==n)
    {
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<n;k++)
            {
                temp.push_back(board[i][k]);
            }
        }
        ans.push_back(temp);
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(check(i,j,n,board))
        {
            board[i][j]=1;
            rec(j+1,n,board,ans);
            board[i][j]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>> ans;
    vector<vector<int>> board(n,vector<int>(n,0));
    rec(0,n,board,ans);
    return ans;
}
