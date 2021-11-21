// https://leetcode.com/problems/remove-stones-to-minimize-the-total

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       sort(piles.begin(),piles.end(), greater<int>());
        int i=0;
        int size1=piles.size()-1;
        while(k>0)
        {
            if(i==size1)
            {
                break;
            }
          float p=(float)(piles[i]/2.0);
            piles[i]=ceil(p);
           // cout<<piles[i]<<" ";
            i++;
            k--;
        }
        
        int sum=accumulate(piles.begin(),piles.end(),0);
        return sum;
    }
};