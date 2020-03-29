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
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        bool check = false;
        ListNode* fast = head;
        ListNode* slow = head;
        if(fast->next != NULL)
            fast = (fast->next)->next;
        slow = slow->next;
        while(1){
            if(fast == NULL)
                return false;
            if(fast->next == NULL || (fast->next)->next == NULL)
                return false;
            if(fast == slow){
                return true;
            }
            if(fast->next != NULL)
                fast = (fast->next)->next;
            slow = slow->next;
        }
        return check;
    }
};
