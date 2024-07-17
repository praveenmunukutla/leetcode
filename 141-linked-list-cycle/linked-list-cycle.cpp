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
     int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

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