class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // base case
        if (head == NULL) {
            return NULL;
        }

        // handling exception
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }

        // if count is less than k, no reversal is needed
        if (count < k) {
            return head;
        }

        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int revCount = 0;

        while (revCount < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            revCount++;
        }
        // recursive call
        head->next = reverseKGroup(next, k);

        return prev;
    }
};
