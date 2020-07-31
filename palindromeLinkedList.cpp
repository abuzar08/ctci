class Solution {
public:
    ListNode* recurse(ListNode* head,int length, bool &check){

        if(length <= 0 || head==NULL){
            check = true;
            return head;
        }

        if(length == 1){
            check = true;
            return head->next;
        }

        ListNode* opposite = recurse(head->next, length-2, check);
        if(check==false || opposite == NULL){
            return NULL;
        }

        check = head->val == opposite->val;

        return opposite->next;

    }
    bool isPalindrome(ListNode* head) {

        int length = 0;

        ListNode* ptr = head;
        while(ptr!=NULL){
            length++;
            ptr = ptr->next;
        }

        bool check;

        recurse(head, length, check);

        return check;

//         ListNode * slow = head, *fast = head;

//         stack<int> data;

//         while(fast!=NULL && fast->next!= NULL){
//             data.push(slow->val);
//             slow = slow->next;
//             fast = fast->next->next;
//         }

// //         IF ODD WE SKIP THE MIDDLE - Else ->

//         if(fast!=NULL) slow = slow->next;

//         while(slow!=NULL){

//             if(data.top()!=slow->val) return false;
//             data.pop();
//             slow  = slow->next;
//         }

//         return true;

    }
};
