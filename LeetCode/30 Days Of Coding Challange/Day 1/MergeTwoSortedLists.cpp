/* 
Problem Link: 
https://leetcode.com/problems/merge-two-sorted-lists/description/?utm_source=instabyte.io&utm_medium=referral&utm_campaign=interview-master-100
*/

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;

        while (list1 && list2){
            if(list1->val <= list2->val){
                curr->next = list1;
                list1 = list1->next;
            }
            else{
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        curr->next = list1 ? list1 : list2;
        
        return ans->next;
    }
};