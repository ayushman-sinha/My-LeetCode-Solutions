// https://leetcode.com/problems/find-unique-binary-string

class Solution {
public:
    vector<string>res;
    string store_bi(int arr[],int n)
    {
        string a="";
        for(int i=0;i<n;i++)
        {
            a=a+(char)(arr[i]+48);
        }
        return a;
    }
    void generate(int arr[],int n,int i)
    {
        
        if(i==n)
        {
            string tmp=store_bi(arr,n);
           
            res.push_back(tmp);//Storing each combo of binary nos
            return;
        }
        arr[i]=0;
        generate(arr,n,i+1);
        arr[i]=1;
        generate(arr,n,i+1);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        int arr[n];
        
        generate(arr,n,0);
        int n1=res.size();
        /*
        for(int i=0;i<n1;i++)
            cout<<res[i]<<" ";
            */
        for(int i=0;i<n1;i++)
        {
            int c=0;//int ind=0;
            for(int j=0;j<n;j++)
            {
                if(res[i]==nums[j])
                    break;
                if(res[i]!=nums[j])
                {
                   c++;
                    //storing position
                }
             }
            if(c==n)
                return res[i];
        }
        return res[0];
    }
};