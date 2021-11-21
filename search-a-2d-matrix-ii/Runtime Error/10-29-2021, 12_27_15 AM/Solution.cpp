// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
public:
    bool binSerRow(vector<vector<int>>& matrix,int i, int target)
    {
        int a=0;
        int b=matrix[i].size()-1;
        while(a<=b)
        {
            int mid=(a+b)/2;
            if(target<matrix[i][mid])
                b=mid-1;
            if(target>matrix[i][mid])
                a=mid+1;
            if(target==matrix[i][mid])
                return true;
        }
        return false;
    }
      bool binSerCol(vector<vector<int>>& matrix,int i, int target)
    {
        int a=0;
        int b=matrix.size()-1;
        while(a<=b)
        {
            int mid=(a+b)/2;
            if(target<matrix[mid][i])
                b=mid-1;
            if(target>matrix[mid][i])
                a=mid+1;
            if(target==matrix[mid][i])
                return true;
        }
          return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            if(binSerRow(matrix,i,target)==true||binSerCol(matrix,i,target)==true)
                return true;
        }
        return false;
    }
};