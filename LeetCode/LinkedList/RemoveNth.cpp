/*  https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/
    19. Remove Nth Node From End of List  */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==0)
            return head;
        vector<ListNode*> stack;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            stack.push_back(temp);
            temp=temp->next;
        }
        if(stack.size()==n)
            head=head->next;
        else
        {
            auto cur=stack.end();
            cur=cur-n;
            auto prev=cur-1;
            (*prev)->next=(*cur)->next;
        }
        return head;
    }
};
