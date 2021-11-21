// https://leetcode.com/problems/word-search-ii

class Solution {
public:
    bool dfs(vector<vector<char>>&board,int i,int j,string w,int ind,vector<vector<bool>>&visited)
    {
        if(ind==w.length()-1)
            return true;
    
     
       visited[i][j]=true;
          if(i>0 && !visited[i-1][j]&&board[i-1][j]==w[ind+1]&&dfs(board,i-1,j,w,ind+1,visited))
           return true;
        
         if(j>0&&!visited[i][j-1]&&board[i][j-1]==w[ind+1]&&dfs(board,i,j-1,w,ind+1,visited))
           return true;
        
            if(i<board.size()-1&&!visited[i+1][j]&&board[i+1][j]==w[ind+1]&&dfs(board,i+1,j,w,ind+1,visited))
            return true;
           if(j<board[0].size()-1&&!visited[i][j+1]&&board[i][j+1]==w[ind+1]&&dfs(board,i,j+1,w,ind+1,visited))
           return true;
        
          
        
     visited[i][j]=false;
        return false;
        
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
       vector<string>ans;
        string dup="";
        for(int i=0;i<words.size();i++)
        {
            vector<vector<bool>>visited(board.size(),vector<bool>(board[0].size(),false));
            bool b=false;
            dup=words[i];
                       reverse(dup.begin(),dup.end());
            for(int j=0;j<board.size();j++)
            {
                for(int k=0;k<board[0].size();k++)
                {
                    if(board[j][k]==dup[0]&&dfs(board,j,k,dup,0,visited)==true)
                      {
                        reverse(dup.begin(),dup.end());
                        ans.push_back(dup);
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