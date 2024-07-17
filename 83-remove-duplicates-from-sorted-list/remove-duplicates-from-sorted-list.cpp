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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr; // Handle edge case of empty list

        ListNode* ans = head; // Pointer to track the original head of the list

        // Traverse the list
        while (head != nullptr && head->next != nullptr) {
            // If current node's value is equal to next node's value, skip the next node
            if (head->val == head->next->val) {
                head->next = head->next->next; // Skip the next node
            } else {
                head = head->next; // Move to the next node
            }
        }

        return ans; // Return the head of the modified list
    }
};
