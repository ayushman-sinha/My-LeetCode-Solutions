// https://leetcode.com/problems/word-search-ii

class Solution {
public:
    bool dfs(vector<vector<char>>&board,int i,int j,string w,int ind,  vector<vector<bool>>&visited)
    {
        if(ind==w.length()-1)
            return true;
        if(i<1||j<1||i>=board.size()-1||j>=board[0].size()-1)
            return false;
           if(board[i][j]!=w[ind])
            return false;
     
       visited[i][j]=true;
        if(!visited[i+1][j]&&dfs(board,i+1,j,w,ind+1,visited))
            return true;
           if(!visited[i-1][j]&&dfs(board,i-1,j,w,ind+1,visited))
           return true;
           if(!visited[i][j+1]&&dfs(board,i,j+1,w,ind+1,visited))
           return true;
           if(!visited[i][j-1]&&dfs(board,i,j-1,w,ind+1,visited))
           return true;
     visited[i][j]=false;
        return false;
        
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
       vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            vector<vector<bool>>visited(board.size(),vector<bool>(board[0].size(),false));
            bool b=false;
            string dup=words[i];
                        reverse(dup.begin(),dup.end());
            for(int j=0;j<board.size();j++)
            {
                for(int k=0;k<board[0].size();k++)
                {
                    if(board[j][k]==dup[0]&&dfs(board,j,k,dup,0,visited)==true)
                      {
                        ans.push_back(words[i]);
                        b=true;
                        break;
                      } 
                    
                }
                if(b==true)
                    break;
            }
        }
        return ans;
    }
};