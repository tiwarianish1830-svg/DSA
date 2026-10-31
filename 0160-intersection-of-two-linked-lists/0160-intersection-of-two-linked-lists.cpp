/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// by usinh hashmap
/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * temp = headA;
        unordered_map<ListNode *,int>mp;
        while(temp != NULL){
            mp[temp] =1;
            temp = temp->next;
        }
        temp = headB;
        while(temp != NULL){
            if(mp.find(temp) != mp.end()) return temp;
            temp = temp->next;
        }
        return NULL;
    }
};
*/


/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * temp1 = headA;
        ListNode * temp2 = headB;
        int len1 =0;
        int len2 = 0;
        while(temp1 != NULL){
            len1++;
            temp1 = temp1->next;
        }
        while(temp2 != NULL){
            len2++;
            temp2 = temp2->next;
        }
        temp1 = headA;
        temp2 = headB;
        
        while(len1>len2){
            temp1=temp1->next;
            len1--;
        }
        while(len2>len1){
            temp2=temp2->next;
            len2--;
        }
        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};
*/

// optimal solution 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * t1 = headA;
        ListNode * t2 = headB;
        while(t1 != t2){
            t1 = t1->next;
            t2 = t2->next;
            if(t1 == t2) return t1;
            if(t1==NULL) t1=headB;
            if(t2==NULL) t2=headA;
        }
        return t1;
    }
};