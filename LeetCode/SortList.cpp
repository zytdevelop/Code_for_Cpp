/* LeetCode No.148  Sort List*/

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
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }


//使用归并排序来给链表排序
    ListNode* mergeSort(ListNode* node){
        if(!node || !node->next)
            return node;
        ListNode* pfast = node;
        ListNode* pslow = node;
        ListNode* pbreak = node;
        while(pfast && pfast->next)
        {
            pfast = pfast->next->next;
            pbreak = pslow;
            pslow = pslow->next;
        }
        pbreak->next = nullptr;
        ListNode* l1 = mergeSort(node);
        ListNode* l2 = mergeSort(pslow);
        return merge(l1,l2);
        
    }
//归并链表
    ListNode* merge(ListNode* l1, ListNode* l2){
        if(l1 == nullptr || l2 == nullptr)
        {
            return l1 == nullptr ? l2 : l1;
        }
        if(l1->val < l2->val)
        {
            l1->next = merge(l1->next,l2);
            return l1;
        }
        else
        {
            l2->next = merge(l1,l2->next);
            return l2;
        }
    }
};
