/* https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3348/
  Delete Node in a Linked List  */

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* cur=NULL;
        while(node->next != NULL)
        {
            node->val=(node->next)->val;
            cur=node;
            node=node->next;
        }
        cur->next=NULL;
    }
};
