/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 /*
 解题要点:删除节点时,防止链表断开.即需要保存删除节点的下一个节点 
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* pSlow = head;
        ListNode* pFast = head;
        for(int i = 0; i < n; i++){
            pFast = pFast->next;
        }
        while(pFast != NULL){
            pSlow = pSlow->next;
            pFast = pFast->next;
            if(pFast == NULL) *pSlow = *(pSlow->next);
        }
        return head;
    }
};
