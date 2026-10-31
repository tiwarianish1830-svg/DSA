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