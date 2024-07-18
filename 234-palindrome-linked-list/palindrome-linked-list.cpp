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
        ListNode* slow = head;
        ListNode* fast = head;

        int len = 0;
        ListNode* curr = head;
        while(curr){
            len++;
            curr = curr->next;
        }

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        if(len % 2 != 0) slow = slow->next;

        ListNode* rlist = reverse(slow);

        while(head != nullptr && rlist != nullptr){
            if(head->val != rlist->val) return false;
            head = head->next;
            rlist = rlist->next;
        }

        return true;
    }

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