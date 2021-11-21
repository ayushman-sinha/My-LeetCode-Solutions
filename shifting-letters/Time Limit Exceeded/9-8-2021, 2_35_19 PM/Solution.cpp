// https://leetcode.com/problems/shifting-letters

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {

        string str="";
        int f=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            f+=(shifts[i]%26);
            int t= ((s[i]-97)+f)%26;
            str=(char)(t+97)+str;
        }
        
        /* FOR DEBUG
        for(int i=0;i<26;i++)
            cout<<ar[i].first<<" "<<ar[i].second<<"\n";
            */
        return str;
    }
};