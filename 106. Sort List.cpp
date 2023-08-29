class Solution {
private:
    ListNode* findMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast != NULL && fast->next != NULL){
            fast=fast->next;
            if(fast->next != NULL){
                fast=fast->next;
            }
            slow=slow->next;
        }
        return slow;
    }


    ListNode* merge(ListNode* left, ListNode* right){
        if(left==NULL){
            return right;
        }
        if(right==NULL){
            return right;
        }

        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;

        while(left != NULL && right != NULL){
            if(left->val < right->val){
                temp->next=left;
                temp=left;
                left=left->next;
            }else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }

        while(left != NULL){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        while(right != NULL){
            temp->next=right;
            temp=right;
            right=right->next;
        }


        return ans->next;
    }


public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* mid=findMid(head);

        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;

        left=sortList(left);
        right=sortList(right);

        ListNode* result=merge(left, right);
        return result;
    }
};
