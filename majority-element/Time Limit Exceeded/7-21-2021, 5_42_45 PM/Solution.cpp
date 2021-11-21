// https://leetcode.com/problems/majority-element

#include <vector>
#include <algorithm>
#include <utility>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector <int> nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
          vector< pair <int,int> >count;
        for(int i=0; i<n;i++)
        {
           int temp=nums.at(i);
            int c=0;
            for(int j=i+1;j<n;j++)
            {
                if(nums.at(j)!=temp)
                {
                    i=j-1;
                    break;
                }
                c++;
            }
           count.push_back(make_pair(c+1,temp));
        }
        sort(count.begin(),count.end());
        reverse(count.begin(),count.end());
       
        return count[0].second;
        
        
        
    }

    int main()
    {
        Solution a1;
        int N;
        cin>>N;
        vector <int> arr;
        for(int i=0;i<N;i++ )
        {
            int r;
            cin>>r;
            arr.push_back(r);
        }
        int res=a1.majorityElement(arr);
        cout<<res;
        return 0;
    }
};