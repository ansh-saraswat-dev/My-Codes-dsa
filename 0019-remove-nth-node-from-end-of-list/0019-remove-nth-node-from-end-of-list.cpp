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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0,head);
        ListNode* left=dummy;
        ListNode* right=dummy;

        for(int i=0;i<=n;i++){
            left=left->next;
        }

        while(left){
            left=left->next;
            right=right->next;
        }
        ListNode* temp=right->next;
        right->next=right->next->next;
        delete temp;
    return dummy->next;
    }
};