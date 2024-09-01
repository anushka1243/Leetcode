class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy= new ListNode(); ;
        ListNode* p=list1;
        ListNode* q=list2;
        ListNode* r=dummy;
        while(p && q)
        {
            if(p->val < q->val)
            {
                r->next=p;
                p=p->next;
            }
            else
            {
                r->next=q;
                q=q->next;
            }
            r=r->next;
        }
        if(p)
        {
            r->next=p;
        }
        if(q)
        {
            r->next=q;
        }

        return dummy->next;
    }
};
