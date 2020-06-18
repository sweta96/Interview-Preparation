/* https://leetcode.com/problems/remove-linked-list-elements/
    203. Remove Linked List Elements  */
    
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(temp->val==val)
            {
                head=temp->next;
                temp=temp->next;
            }
            else if(temp->next!=NULL && (temp->next)->val==val)
            {
                temp->next=(temp->next)->next;
            }
            else
                temp=temp->next;
        }
        return head;
    }
};
