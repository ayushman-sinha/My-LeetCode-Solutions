// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool binSer(int i,vector<vector<int>>& matrix, int target)
    {
        int a=0;
        int b=matrix[i].size()-1;
        while(a<=b)
        {
            int mid=(a+b)/2;
            if(target<matrix[i][mid])
                b=mid-1;
            else if(target>matrix[i][mid])
                a=mid+1;
            else if(target==matrix[i][mid])
                return true;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            if(target>=matrix[i][0]&&target<=matrix[i][matrix[i].size()-1])
            {
                if(binSer(i,matrix,target))
                return true;
            }
        }
        return false;
        
    }
};