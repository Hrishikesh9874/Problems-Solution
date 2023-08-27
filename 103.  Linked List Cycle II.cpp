class Solution {
private:
    ListNode* checkpos(ListNode* slow, ListNode* head){
        ListNode* temp=head;
        
        while(temp != slow){
            temp=temp->next;
            slow=slow->next;
        }
            return temp;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }

        // applying floyd's cycle algorithm
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast != NULL){
            fast=fast->next;
            if(fast != NULL){
                fast=fast->next;
            }
            slow=slow->next;

            if(slow==fast){
                cout<<slow->val<<" "<<fast->val;
                return checkpos(slow, head);
            }
        }
        
        return NULL;
    }
};
