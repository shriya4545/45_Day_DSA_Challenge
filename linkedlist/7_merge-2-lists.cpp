class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
          ListNode* ans, *head;
        int flg=1;
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
          while(list1!=NULL && list2!=NULL)
          {
              if(list1->val<=list2->val)
              {
                   ListNode* tmp= new ListNode(list1->val);
                  if(flg)
                  {
                      head=tmp;
                     ans=tmp;
                      flg=0;
                  }
                  else
                  {ans->next=tmp;
                  ans=ans->next;}
                  list1=list1->next;
              }
              else if(list1->val>list2->val)
              {
                  ListNode* tmp= new ListNode(list2->val);
                  if(flg)
                  {
                      head=tmp;
                     ans=tmp; flg=0;
                  }
                  //flg=0;
                  else
                  { ans->next=tmp;
                  ans=ans->next;}
                  list2=list2->next;
              }
          }
            if(!list1)
                ans->next=list2;
            else
                ans->next=list1;
        return head;
    }
};