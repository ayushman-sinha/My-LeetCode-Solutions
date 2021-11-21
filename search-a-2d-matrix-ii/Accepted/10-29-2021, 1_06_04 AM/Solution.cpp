// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
public:
   
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int a=0;
        int b=matrix[0].size()-1;
        while(a<matrix.size()&&b>=0)
        {
            if(matrix[a][b]==target)
                return true;
            if(matrix[a][b]<target)
                a++;
            else
                b--;
        }
        return false;
    }
};