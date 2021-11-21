// https://leetcode.com/problems/distribute-candies

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int max_can=candyType.size()/2;
        int c=0;
        for(int i=0;i<candyType.size();i++)
        {
            
            while(i<candyType.size()-1&&candyType[i]==candyType[i+1])
            {
                i++;
            }
          c++;
        }
        if(c>=max_can)
            return max_can;
        else
            return c;
      
    }
};