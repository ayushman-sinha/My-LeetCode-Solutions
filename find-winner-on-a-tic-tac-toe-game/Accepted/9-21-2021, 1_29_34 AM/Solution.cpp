// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int m=moves.size();
       
  
       // vector<vector<char>>ar;
        char ar[3][3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                ar[i][j]='*';
        }
       int c=0;
        for(int i=0;i<m;i++)
        {
           
           if(i%2==0)
           {
               ar[moves[i][0]][moves[i][1]]='X';
           }
            else
            {
                 ar[moves[i][0]][moves[i][1]]='O';
            }
            c++;
        }
        /*
         for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cout<<ar[i][j]<<" ";
             cout<<"\n";
        }
        */
        
        if(ar[0][0]==ar[0][1]&&ar[0][1]==ar[0][2]&&ar[0][0]==ar[0][2])
        {
            if(ar[0][0]=='X')
                return "A";
             if(ar[0][0]=='O')
                return "B";
        }
        if(ar[1][0]==ar[1][1]&&ar[1][1]==ar[1][2]&&ar[1][0]==ar[1][2])
        {
            if(ar[1][0]=='X')
                return "A";
            if(ar[1][0]=='O')
                return "B";
        }
         if(ar[2][0]==ar[2][1]&&ar[2][1]==ar[2][2]&&ar[2][0]==ar[2][2])
        {
            if(ar[2][0]=='X')
                return "A";
           if(ar[2][0]=='O')
                return "B";
        }
         if(ar[0][0]==ar[1][0]&&ar[1][0]==ar[2][0]&&ar[0][0]==ar[2][0])
        {
            if(ar[0][0]=='X')
                return "A";
              if(ar[0][0]=='O')
                return "B";
        }
        if(ar[0][1]==ar[1][1]&&ar[1][1]==ar[2][1]&&ar[0][1]==ar[2][1])
        {
            if(ar[0][1]=='X')
                return "A";
           if(ar[0][1]=='O')
                return "B";
        }
         if(ar[0][2]==ar[1][2]&&ar[1][2]==ar[2][2]&&ar[0][2]==ar[1][2])
        {
            if(ar[0][2]=='X')
                return "A";
           if(ar[0][2]=='O')
                return "B";
        }
        if(ar[0][0]==ar[1][1]&&ar[1][1]==ar[2][2]&&ar[0][0]==ar[2][2])
        {
            if(ar[0][0]=='X')
                return "A";
           if(ar[0][0]=='O')
                return "B";
        }
        if(ar[0][2]==ar[1][1]&&ar[1][1]==ar[2][0]&&ar[0][2]==ar[2][0])
        {
            if(ar[0][2]=='X')
                return "A";
            if(ar[0][2]=='O')
                return "B";
        }
        if(c<9)
            return "Pending";
        return "Draw";
        
         
    }
};