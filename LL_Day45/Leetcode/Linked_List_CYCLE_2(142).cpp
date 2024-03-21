/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;  // No cycle if the list is empty or has only one node
        }

        ListNode *slow = head;
        ListNode *fast = head;

        // Phase 1: Detect if there is a cycle
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                break;  // Cycle detected
            }
        }

        // If there is no cycle, return nullptr
        if (slow != fast) {
            return nullptr;
        }

        // Phase 2: Find the starting node of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};
