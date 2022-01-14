class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode ans_head(0);
        ListNode *p =&ans_head;
        int extra =0;
        while(l1 or l2 or extra){
            if(l1) extra+=l1->val,l1=l1->next;
            if(l2) extra+=l2->val,l2=l2->next;
            p->next=new ListNode(extra%10);
            extra=extra/10;
            p=p->next;
        }
        return ans_head.next;
    }
};