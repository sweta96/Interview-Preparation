/*https://leetcode.com/explore/interview/card/top-interview-questions-medium/107/linked-list/784/
    Odd Even Linked List  */

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* temp=NULL;
        ListNode* p=head;
        ListNode* p1=NULL;
        ListNode* cur=NULL;
        if(p->next!=NULL)
        {
            p1=(p->next)->next;
            cur=p->next;
        }
        while(p1!=NULL)
        {
            temp=p1;
            cur->next=temp->next;
            cur=cur->next;
            if(p1->next!=NULL)
                p1=(p1->next)->next;
            else
                p1=NULL;
            temp->next=p->next;
            p->next=temp;
            p=temp;
        }
        return head;
    }
};
