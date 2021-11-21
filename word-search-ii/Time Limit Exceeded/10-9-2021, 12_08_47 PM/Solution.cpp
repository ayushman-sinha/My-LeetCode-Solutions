// https://leetcode.com/problems/word-search-ii

class Solution {
public:
    bool dfs(vector<vector<char>>board,int i,int j,string w,int ind)
    {
        if(ind==w.length())
            return true;
        if(i<0||j<0||i>=board.size()||j>=board[0].size()||board[i][j]=='*')
            return false;
           if(board[i][j]!=w[ind])
            return false;
        char tmp=board[i][j];
        board[i][j]='*';
        if(dfs(board,i+1,j,w,ind+1)||dfs(board,i-1,j,w,ind+1)||dfs(board,i,j+1,w,ind+1)||dfs(board,i,j-1,w,ind+1))
            return true;
        board[i][j]=tmp;
        return false;
        
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
       vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
          
            
            bool b=false;
            for(int j=0;j<board.size();j++)
            {
                for(int k=0;k<board[0].size();k++)
                {
                    if(dfs(board,j,k,words[i],0)==true)
                      {
                        ans.push_back(words[i]);
                        b=true;
                        break;
                      }                   
                       
                     else 
                     {
                           string dup=words[i];
                          reverse(dup.begin(),dup.end());
                          //cout<<dup<<" ";
                         if(dfs(board,j,k,dup,0)==true)
                          {
                             ans.push_back(words[i]);
                            b=true;
                            break;
                           }      
                     }
                }
                if(b==true)
                    break;
            }
        }
        return ans;
    }
};