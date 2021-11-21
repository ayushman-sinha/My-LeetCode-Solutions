// https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color

class Solution {
public:
    bool winnerOfGame(string colors) {
          int c1 = 0;
        int c2 = 0;
        for(int i=1;i<colors.length()-1;i++){
            if(colors[i] == 'A' && colors[i-1] == colors[i] && colors[i] == colors[i+1])
                c1++;
            else if(colors[i] == 'B' && colors[i-1] == colors[i] && colors[i] == colors[i+1])
                c2++;
        }
       // cout<<Acount<<" "<<Bcount<<"\n";
        if(c1 == c2)
            return false;
        if(c2 > c1)
            return false;
        return true;
    }
};