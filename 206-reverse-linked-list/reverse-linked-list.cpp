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
    ListNode* reverseList(ListNode* head) {
        // If the list is empty, return nullptr
        if (head == nullptr) return nullptr;

        ListNode* curr = head;  // Start with the head as the current node
        ListNode* prev = nullptr;  // Initialize the previous node to null
        ListNode* next = nullptr;  // This will store the next node temporarily

        // Traverse through the list
        while (curr != nullptr) {
            next = curr->next;  // Store the next node
            curr->next = prev;  // Reverse the current node's pointer

            prev = curr;  // Move the previous node pointer to the current node
            curr = next;  // Move to the next node in the original list
        }

        return prev;  // At the end, prev will be the new head of the reversed list
    }
};
