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

    int Length(ListNode* head){
        if(head == nullptr) return 0;
        int len = 0;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;
        int lenA = Length(headA);
        int lenB = Length(headB);
        int diff = lenA > lenB ? lenA-lenB : lenB-lenA;
        if(lenA > lenB){
            while(diff && headA){
                headA = headA->next;
                diff--;
            }
        }else {
            while(diff && headB){
                headB = headB->next;
                diff--;
            }
        }

        if(diff) return nullptr;

        while(headA && headB){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }

        return nullptr;
    }
};