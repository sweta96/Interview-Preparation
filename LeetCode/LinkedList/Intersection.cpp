/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/107/linked-list/785/
    Intersection of Two Linked Lists   */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA!=NULL)
        {
            ListNode *tempB = headB;
            while(tempB!=NULL)
            {
                if(headA==tempB)
                    return headA;
                tempB=tempB->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
};
