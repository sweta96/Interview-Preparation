/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/107/linked-list/783/
      Add Two Numbers  */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int l=0,value=0;
        ListNode* result = NULL;
        ListNode* cur = NULL;
        while(l1!=NULL || l2!=NULL)
        {
            value=l;
            if(l1!=NULL)
                value+=l1->val;
            if(l2!=NULL)
                value+=l2->val;
            if(value>9)
            {
                value=value%10;
                l=1;
            }
            else
                l=0;
            ListNode* temp = new ListNode(value);
            if(result==NULL)
            {
                result=temp;
                cur=temp;
            }
            else
            {
                cur->next=temp;
                cur=temp;
            }
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
        }
        
        if(l!=0)
        {
            ListNode* temp = new ListNode(l);
            cur->next=temp;
        }
        return result;
    }
};
