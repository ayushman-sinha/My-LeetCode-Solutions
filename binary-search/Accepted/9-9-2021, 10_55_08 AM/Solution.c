// https://leetcode.com/problems/binary-search



int search(int* nums, int numsSize, int target){
    
    int a=0;
    int b=numsSize-1;
    while(a<=b)
    {
        int mid=(a+b)/2;
        if(target==nums[mid])
            return mid;
        if(target>nums[mid])
            a=mid+1;
        else if(target<nums[mid])
            b=mid-1;
    }
    return -1;

}