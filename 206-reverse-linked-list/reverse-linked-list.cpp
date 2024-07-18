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
        return reverseListUtil(head);
    }

    ListNode* reverseListUtil(ListNode* node){
        if(node == nullptr || node->next == nullptr) return node;
        
        ListNode* newHead = reverseListUtil(node->next);
        
        node->next->next = node;
        node->next = nullptr;
        
        return newHead;
    }
};