// https://leetcode.com/problems/string-matching-in-an-array

class Solution {
public:
    static bool comp(string a,string b)
    {
        if(a.length()>b.length())
            return true;
        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
      sort(words.begin(),words.end(),comp);
        vector<string>ans;
        for(int i=0;i<words.size()-1;i++)
        {
            if(words[i]!="*")
            {
            for(int j=i+1;j<words.size();j++)
            {
                if(words[i].find(words[j])!= string::npos)
                {
                    ans.push_back(words[j]);
                    words[j]="*";
                   // break;
                }
            }
            }
        }
        return ans;
    }
};