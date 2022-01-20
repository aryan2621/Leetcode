
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int len=1;
        ListNode *nh,*nt;
        nh=nt=head;
        while(nt->next){
            nt=nt->next;
            len+=1;
        }
        nt->next=head;
        if(k %= len){
            for(int i=0;i<len-k;i++) nt=nt->next;
        }
        nh=nt->next;
        nt->next=NULL;
        return nh;
    }
};