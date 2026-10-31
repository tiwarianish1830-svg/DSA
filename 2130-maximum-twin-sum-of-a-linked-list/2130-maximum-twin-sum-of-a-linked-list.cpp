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

// brute force
/*
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>ans;
        ListNode* temp = head;
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int result =0;
        int i=0 , j =ans.size()-1;
        while(i<j){
            result =max(result,ans[i]+ans[j]);
            i++;
            j--;
        }
        return result ;
    }
};
*/

// using stack

/* 
class Solution {
public:
    int pairSum(ListNode* head) {
        stack<int>st;
        ListNode* temp = head;
        while(temp != NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        int result=0;
        temp = head;
        int count =1;
        while(count <= st.size()/2){
            result = max(result,temp->val + st.top());
            temp = temp->next;
            st.pop();
        }
        return result;
    }
};
*/

// optimal solution

class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = slow;
        ListNode* prev = NULL;
        while(temp != NULL){
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        int result = 0;
        ListNode* first = head;
        ListNode* second = prev;
        while(second != NULL){
            result = max(result ,first->val+second->val);
            first = first->next;
            second = second->next;
        }
        return result;
    }
};