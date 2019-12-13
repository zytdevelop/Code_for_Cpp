/*LeetCode No.23. Merge k Sorted Lists*/
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
  //改良合并的方式: 与归并排序的思路一致,两路归并
  if(lists.empty())
    return nullptr;
  int n = lists.size();
  while(n > 1)
  {
    int k = (n + 1) / 2;
    for(int i = 0; i < n/2; ++i)
      lists[i] = mergeTwoLists(lists[i],lists[i+k]);
    n = k;
  }
  return lists[0];
  
  /***使用暴力循环两两合并数组的方法,时间复杂度很高
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
    */
  
  

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
