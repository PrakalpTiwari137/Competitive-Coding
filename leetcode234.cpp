class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            length++;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next;

        for (int i = 0; i < (length / 2); i++){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* p1;
        ListNode* p2;
        if (length % 2 == 0) {
            p1 = prev;
            p2 = next;
        } else {
            p1 = prev;
            p2 = next->next;
        }
        
        for (int i = 0; i < (length / 2); i++) {
            if (p1->val != p2->val) return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};
