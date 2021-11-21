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
        return nums.at(n/2);
          
        
        
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