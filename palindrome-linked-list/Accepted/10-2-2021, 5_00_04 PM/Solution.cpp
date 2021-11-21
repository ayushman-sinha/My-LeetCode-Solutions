// https://leetcode.com/problems/palindrome-linked-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
       
        vector<int>ar;
        ListNode *cur=head;
        while(cur!=nullptr)
        {
            ar.push_back(cur->val);
            cur=cur->next;
        }
        int a=0;
        int b=ar.size()-1;
        while(a<=b)
        {
            if(ar[a]!=ar[b])
                return false;
            a++;
            b--;
        }
        return true;
    }
};