// Reverse linked list leetcode problem
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
     ListNode *current = head;
     ListNode *next = NULL;
     ListNode *previous = NULL;
    
     while(current != NULL){
         next = current->next;
         current->next = previous;
         previous = current;
         current = next;
     }
     head = previous;
     return head;
    }
};
