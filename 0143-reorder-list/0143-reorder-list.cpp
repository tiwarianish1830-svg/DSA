/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* reverseLL(ListNode* head){
    ListNode* temp = head;
    ListNode* prev = NULL;
    while(temp != NULL){
        ListNode* next = temp->next;
        temp->next = prev;
        prev = temp;
        temp=next;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* rev = reverseLL(slow->next);
        slow->next = NULL;
        ListNode* temp =head;
        while(rev != NULL){
            ListNode* curr = temp->next;
            ListNode* currrev = rev->next;
            temp->next = rev;
            rev->next = curr;
            temp = curr;
            rev = currrev;
        }
    }
};