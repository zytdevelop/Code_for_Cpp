
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//思路之一:合并多个有序的链表可以分解为多次合并两个有序的链表.


ListNode* mergeKLists(vector<ListNode*>& lists) {
    if(lists.size() == 0)
        return nullptr;
    if(lists.size() == 1)
        return lists[0];
    ListNode *p = lists[0];
    for(int i = 1; i < lists.size(); i++)
    {
        p = mergeTwoLists(p,lists[i]);
    }
    return p;
}
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == nullptr||l2 == nullptr)
    {
        return l1 == nullptr ? l2 : l1;
    }

    ListNode* newNode = new ListNode(0);
    ListNode* pNode = newNode;
    while(l1&&l2)
    {
        if(l1->val > l2->val)
        {
            pNode->next = l2;
            l2 = l2->next;
        }
        else
        {
            pNode->next = l1;
            l1 = l1->next;
        }
        pNode = pNode->next;
    }
    while(l1)
    {
        pNode->next = l1;
        l1 = l1->next;
        pNode = pNode->next;
    }
    while(l2)
    {
        pNode->next =l2;
        l2 = l2->next;
        pNode = pNode->next;
    }

    return newNode->next;
}
