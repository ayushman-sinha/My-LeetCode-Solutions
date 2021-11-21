// https://leetcode.com/problems/reverse-prefix-of-word

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=word.find(ch);
        if(i==INT_MAX)
            return word;
        reverse(word.begin(),word.begin()+i+1);
       return word;
    }
};