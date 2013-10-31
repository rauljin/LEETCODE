/*
Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?
*/
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
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(head==NULL) return false;
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(true){
            if(slow==fast){
                return true;
            }
            else if(fast==NULL || fast->next==NULL){
                return false;
            }
            else{
                slow=slow->next;
                fast=fast->next->next;
            }
            
        }
    }
};
