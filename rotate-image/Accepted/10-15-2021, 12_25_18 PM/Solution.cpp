// https://leetcode.com/problems/rotate-image

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int n=matrix.size()-1;int k=0;
        for(int i=0;i<=n;i++)
        {
            vector<int>a;
            vector<int>b;
             vector<int>c;
            vector<int>d;
            for(int j=k;j<=n;j++)
            {
                   a.push_back(matrix[j][i]);//left
                b.push_back(matrix[i][j]);//up             
                c.push_back(matrix[j][n]);//right
                d.push_back(matrix[n][j]);//down
            }
            int m=0;
            reverse(a.begin(),a.end());
           for(int j=k;j<=n;j++)
            {
               matrix[i][j]=a[m];//rebuilding the upper   
               m++;
           }
            m=0;
            for(int j=k;j<=n;j++)
            {
                 matrix[j][n]=b[m];//rebuilding the right
                m++;
            }
             m=0;
             for(int j=k;j<=n;j++)
            {
                 matrix[j][i]=d[m];//rebuilding the left
                 m++;
            }
             m=0;
         reverse(c.begin(),c.end());
             for(int j=k;j<=n;j++)
            {
                   matrix[n][j]=c[m];//rebuilding the down   
                 m++;
            }
             m=0;
            n--;
            k++;
         }
        
    }
};