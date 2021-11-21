// https://leetcode.com/problems/sort-an-array

class Solution {
public:
    void build_heap(vector<int>&nums,int i,int n)
    {
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;
        if(l<n&&nums[l]>nums[largest])
           largest=l;
        if(r<n&&nums[r]>nums[largest])
            largest=r;
        if(largest!=i)
        {
            swap(nums[largest],nums[i]);
            build_heap(nums,largest,n);
        }        
    }
    void heap_sort(vector<int>&nums,int n){
        for(int i=n/2-1;i>=0;i--)
        {
            build_heap(nums,i,n);
        }
        for(int i=n-1;i>0;i--)
        {
            swap(nums[0],nums[i]);
            build_heap(nums,0,i);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
       heap_sort(nums,nums.size());
        return nums;
    }
};