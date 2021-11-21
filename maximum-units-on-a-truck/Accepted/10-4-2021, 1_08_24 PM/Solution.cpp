// https://leetcode.com/problems/maximum-units-on-a-truck

class Solution {
public:
   static bool sortcomp(const vector<int>&a,const vector<int>&b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),sortcomp);
        /*
        for(int i=0;i<boxTypes.size();i++)
            cout<<boxTypes[i][0]<<" "<<boxTypes[i][1]<<"\n";
            */
        long int total=0;
        long int sum=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            sum+=boxTypes[i][0];
            if(sum>truckSize)
            {
                sum-=boxTypes[i][0];
                total+=((truckSize-sum)*boxTypes[i][1]);
                break;
            }
            else
            {
                total+=(boxTypes[i][0]*boxTypes[i][1]);
            }
        }
        return total;
    }
};