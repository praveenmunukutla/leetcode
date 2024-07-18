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
    ListNode* removeElements(ListNode* head, int val) {
        // Handle the case where the list is initially empty
        if(head == nullptr) return nullptr;

        // Create a dummy node to handle cases where the head itself might be removed
        ListNode* temp = new ListNode(-1);
        temp->next = head;

        ListNode* prev = temp;  // Pointer to track the previous node

        // Traverse through the list
        while(head){
            // If current node's value equals val, skip over it
            if(head->val == val){
                prev->next = head->next;  // Remove current node by skipping it
            }
            else {
                prev = head;  // Update prev pointer to current node
            }
            head = head->next;  // Move to the next node
        }

        return temp->next;  // Return the adjusted head of the list
    }
};
