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
    
//to reverse 
ListNode* reverse(ListNode* temp)
{
    ListNode* prev=NULL;
    ListNode* curr=temp;
    while(curr!=NULL)
    {
        ListNode* nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;

}

//to find kth node
ListNode* findk(ListNode* temp,int k)
{
    k=k-1;
    while(temp!=NULL and k>0)
    {
        temp=temp->next;
        k--;
    }
    return temp;
}




    ListNode* reverseKGroup(ListNode* head, int k) {
      ListNode* temp=head;
      ListNode*  prev=NULL;
      while(temp!=NULL)
      {
          ListNode* kthnode=findk(temp,k);
          if(kthnode==NULL)
          {
              if(prev)
              prev->next=temp;
              break;
          }
      
      ListNode* nextnode=kthnode->next;
      kthnode->next=NULL;
      reverse(temp);
      
      if(temp==head)
      head=kthnode;
      else
      
      prev->next=kthnode;

      prev=temp;
      temp=nextnode;

      }
      return head;

        
    }
};