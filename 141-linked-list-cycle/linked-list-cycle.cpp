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
        if (head == nullptr) return false; // If the list is empty, return false

        ListNode* rabbit = head->next; // Move rabbit two steps at a time
        ListNode* tortoise = head;     // Move tortoise one step at a time

        while (rabbit && rabbit->next) {
            if (tortoise == rabbit) return true; // If they meet, there's a cycle

            tortoise = tortoise->next;         // Move tortoise one step
            rabbit = rabbit->next->next;       // Move rabbit two steps
        }

        return false; // If rabbit reaches the end (NULL), there's no cycle
    }
};