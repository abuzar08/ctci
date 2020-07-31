/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    struct result{
        ListNode* collision;
        bool cycle;
    };
    result hasCycle(ListNode *head) {

        result ret;
        ret.collision = NULL;
        ret.cycle = false;

        if(head==NULL) return ret;

        ListNode* slow = head;
        ListNode* fast = head;


        while(fast!= NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow==fast){
                ret.collision = slow;
                ret.cycle = true;
                return ret;
            }
        }
        return ret;
    }
    ListNode *detectCycle(ListNode *head) {

        result check = hasCycle(head);
        if(check.cycle == false) return NULL;

        ListNode* slow = head;
        ListNode* fast = check.collision;

        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }

        return slow;

    }
};
