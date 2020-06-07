/* https://leetcode.com/problems/swap-nodes-in-pairs/submissions/
  24. Swap Nodes in Pairs  */
  
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp=head;
        ListNode *temp1=NULL;
        while(temp!=NULL && temp->next!=NULL)
        {
            int val1=temp->val;
            temp1=temp->next;
            temp->val=temp1->val;
            temp1->val=val1;
            temp=temp1->next;
        }
        return head;
    }
};
