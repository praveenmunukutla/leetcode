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
        // Initialize slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;

        // Calculate the length of the linked list
        int len = 0;
        ListNode* curr = head;
        while(curr){
            len++;
            curr = curr->next;
        }

        // Move fast pointer to the middle of the list
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Adjust slow pointer for odd length lists
        if(len % 2 != 0) slow = slow->next;

        // Reverse the second half of the linked list
        ListNode* rlist = reverse(slow);

        // Compare the original first half with the reversed second half
        while(head != nullptr && rlist != nullptr){
            if(head->val != rlist->val) return false;
            head = head->next;
            rlist = rlist->next;
        }

        return true;
    }

    // Function to reverse a linked list
    ListNode* reverse(ListNode* node){
        if(node == nullptr) return nullptr;

        ListNode* prev = nullptr;
        ListNode* curr = node;
        ListNode* next = nullptr;

        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};
