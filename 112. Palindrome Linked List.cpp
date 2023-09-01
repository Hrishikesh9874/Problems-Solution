class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode* temp=head;
        while(temp != NULL){
            st.push(temp->val);
            temp=temp->next;
        }

        while(!st.empty()){
            int x=st.top();
            st.pop();
            if(x != head->val){
                return 0;
            }
            head=head->next;
        }
        return 1;
    }
};
