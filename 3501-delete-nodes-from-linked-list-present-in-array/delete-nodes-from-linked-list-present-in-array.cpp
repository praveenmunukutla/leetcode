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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* nlist = nullptr;
        ListNode* ans = nullptr;
        unordered_set<int> uset(nums.begin(), nums.end());
        while(head){
            if(uset.find(head->val) == uset.end()){
                // add this to ans list;
                if(nlist == nullptr){
                    nlist = head;
                    ans = nlist;
                }else{
                    nlist->next = head;
                    nlist = nlist->next;
                }
            }
            head = head->next;
        }

        // Properly terminate the new list
        if(nlist) {
            nlist->next = nullptr;
        }

        return ans;
    }
};