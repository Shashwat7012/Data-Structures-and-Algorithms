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



// Leetcode = 876
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL ){
            return head;
        }
        
        ListNode*curr = head;
        ListNode*prev = NULL;
        ListNode*forword = NULL;

        while(curr != NULL){
            forword = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forword;
        }
        return prev;
    }
};

//Approach :- 2
 // slow pointer and fast pointer