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
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        
        ListNode* rabbit = head->next;
        ListNode* tortoise = head;

        while(rabbit && rabbit->next){
            if(tortoise == rabbit) return true;
            tortoise = tortoise->next;
            rabbit = rabbit->next->next;
        }

        return false;
    }
};