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
// using stack
/*
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       stack<int>st1;
       stack<int>st2;
       ListNode* temp1 = l1;
       ListNode* temp2 = l2;
       while(temp1 != NULL){
        st1.push(temp1->val);
        temp1= temp1->next;
       }
       while(temp2 != NULL){
        st2.push(temp2->val);
        temp2= temp2->next;
       }
       ListNode* head = nullptr;
        int carry = 0;
       while (!st1.empty() || !st2.empty() || carry > 0) {
            int sum = carry;
            
            if (!st1.empty()) {
                sum += st1.top();
                st1.pop();
            }
            
            if (!st2.empty()) {
                sum += st2.top();
                st2.pop();
            }
            carry = sum / 10; 
            
            ListNode* newNode = new ListNode(sum % 10);
            newNode->next = head;
            head = newNode;
        }
        
        return head;
    }
};
*/


/// optimal solution

class Solution {
public:
ListNode* reverseLL(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL) {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseLL(l1);
        l2 = reverseLL(l2);
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new  ListNode(-1);
        ListNode* curr = dummy;
        int carry =0;
        while(temp1 != NULL || temp2 != NULL){
            int sum = carry;
            if(temp1 != NULL) sum+=temp1->val;
            if(temp2 != NULL) sum+=temp2->val;
            ListNode* newnode = new ListNode(sum%10);
            carry = sum/10;
            curr->next=newnode;
            curr = curr->next;
            if(temp1 != NULL)temp1=temp1->next;
            if(temp2 != NULL)temp2=temp2->next;
        }
        if(carry!=0){
            ListNode* newnode = new ListNode(carry);
            curr->next = newnode;
        }
        return reverseLL(dummy->next);
    }
};