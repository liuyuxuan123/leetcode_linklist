
ListNode* insertionSortList(ListNode* head) {
      ListNode* newHead = new ListNode(0);
      newHead->next= head;
      ListNode* pre = newHead;
      ListNode* cur = head;

      while(cur){
          if(cur -> next && cur->next->val < cur->val){
              while(pre->next && pre->next->val < cur->next->val){
                  pre = pre->next;
              }
              ListNode* temp = pre->next;
              pre->next = cur->next;
              cur->next = cur->next->next;
              pre->next->next = temp;
              pre = newHead;
          }else{
              cur = cur->next;
          }
      }
      ListNode* res = newHead->next;
      delete newHead;
      return res;


  }
