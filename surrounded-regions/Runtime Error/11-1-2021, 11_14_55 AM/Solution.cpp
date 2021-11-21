// https://leetcode.com/problems/surrounded-regions

class Solution {
public:
    void dfs(vector<vector<char>>&board,int i ,int j,char k)
    {
        if(i<0||j<0||i>=board.size()||j>=board[0].size()||board[i][j]=='X')
            return;
        board[i][j]=k;
        dfs(board,i+1,j,k);
         dfs(board,i,j+1,k);
         dfs(board,i-1,j,k);
         dfs(board,i,j-1,k);
    }
    
    void solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board.size();j++)
            {
                if(i==0||i==board.size()-1||j==0||j==board[0].size()-1)
                    if(board[i][j]=='O')
                    dfs(board,i,j,'#');
            }
        }//Changing all the border elements
         for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board.size();j++)
            {
                if(board[i][j]=='O')
                    dfs(board,i,j,'X');
            }
        }//changing all the elements in the middle
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board.size();j++)
            {
                if(i==0||i==board.size()-1||j==0||j==board[0].size()-1)
                    if(board[i][j]=='#')
                    dfs(board,i,j,'O');
            }
        }//restoring the border elements
    }
};