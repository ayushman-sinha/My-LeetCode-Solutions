// https://leetcode.com/problems/add-strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        long long unsigned int a=stoi(num1);
        long long unsigned int b=stoi(num2);
        a+=b;
        string s=to_string(a);
        return s;
        
    }
};