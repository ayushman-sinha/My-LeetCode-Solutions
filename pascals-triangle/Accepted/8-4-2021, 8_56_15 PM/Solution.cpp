// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ar1;
        vector <int>a;
        if(numRows==1)
        {
        a.push_back(1);
        ar1.push_back(a);
        }
       if(numRows==2)
       {
            a.push_back(1);
        ar1.push_back(a);
        a.push_back(1);
        ar1.push_back(a);
       }
        
        if(numRows>2)
        {
              a.push_back(1);
        ar1.push_back(a);
            a.push_back(1);
        ar1.push_back(a);
            a.clear();
            
            int k=2;int k1=0;
        int i=1;int j=0; int li=2;
        while(k!=numRows)
        {
            if(k1==0)
            {
                a.push_back(1);
                k1++;
            }
            if((k1!=0)&&(k1<=li))
            {
                int sum=ar1[i][j]+ar1[i][j+1];
                
                a.push_back(sum);
               j++; 
                k1++;
             }
            if(k1==li)
            {
                a.push_back(1);
                ar1.push_back(a);
                a.clear();
                k++;
                i++;
                j=0;
                k1=0;li++;
            }
            
        }
        }
       return ar1; 
    }
};