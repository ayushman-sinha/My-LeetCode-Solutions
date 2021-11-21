// https://leetcode.com/problems/remove-stones-to-minimize-the-total

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       sort(piles.begin(),piles.end(), greater<int>());
        int i=0;
        int size1=piles.size();
        while(k>0)
        {
           
          float p=(float)(piles[i]/2.0);
            piles[i]=ceil(p);
           // cout<<piles[i]<<" ";
            i++;
            k--;
             if(i==size1)
            {
                break;
            }
        }
        
        int sum=accumulate(piles.begin(),piles.end(),0);
        return sum;
    }
};