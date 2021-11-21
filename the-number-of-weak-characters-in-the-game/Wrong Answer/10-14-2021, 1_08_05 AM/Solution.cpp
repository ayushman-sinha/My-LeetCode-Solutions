// https://leetcode.com/problems/the-number-of-weak-characters-in-the-game

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int c=0;
        for(int i=0;i<properties.size()-1;i++)
        {
            for(int j=i+1;j<properties.size();j++)
            {
                if(properties[i][0]<properties[j][0]&&properties[i][1]<properties[j][1])
                c++;
                else if(properties[i][0]>properties[j][0]&&properties[i][1]>properties[j][1])
                    c++;
            }
        }
        return c;
    }
};