// https://leetcode.com/problems/n-th-tribonacci-number

class Solution {
public :
    int tribonacci(int n)
    {
       vector<long int>ar;
        ar.push_back(0);
        ar.push_back(1);
        ar.push_back(1);
        for(int i=3;i<=37;i++)
        ar.push_back(ar[i-1]+ar[i-2]+ar[i-3]);
		return ar[n];
    }
};