// https://leetcode.com/problems/word-search

class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int i,int j,int ind )
    {
        if(ind==word.size())
            return true;
        if(i<0||j<0||i>=board.size()||j>=board[0].size()||board[i][j]=='.')
            return false;
        if(board[i][j]!=word[ind])
            return false;
        char tmp=board[i][j];
        board[i][j]='.';
       if(dfs(board,word,i-1,j,ind+1)||dfs(board,word,i+1,j,ind+1)||dfs(board,word,i,j-1,ind+1)||dfs(board,word,i,j+1,ind+1))
      return true;
        board[i][j]=tmp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(word=="")
            return false;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(dfs(board,word,i,j,0)==true)
                    return true;
            }
        }
        return false;
    }
};