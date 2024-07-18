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

    int getLength(ListNode* head){
        int len = 0;
        for(; head; head = head->next) len++;
        return len;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;
        
        int lenA = getLength(headA);
        int lenB = getLength(headB);
        
        // Adjust the starting point so that the remaining lengths of both lists are equal
        if(lenA > lenB){
            for(int i = 0; i < lenA - lenB; i++) headA = headA->next;
        } else {
            for(int i = 0; i < lenB - lenA; i++) headB = headB->next;
        }
        
        // Move both pointers until they intersect
        while(headA && headB){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }

        return nullptr;
    }
};
