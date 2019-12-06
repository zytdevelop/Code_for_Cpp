/*

题目:
给定一个已按照升序排列的有序数组，找到两个数使得它们相加之和等于目标数。

函数应该返回这两个下标值 index1 和 index2，其中 index1 必须小于 index2。

说明:

返回的下标值（index1 和 index2）不是从零开始的。
你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/


//思路: 首先确定数组的性质(有序),根据这个性质,利用双指针,头尾两值相加,如果和小于目标值,左端指针后;如果和大于目标值,右端指针左移.最后两指针相遇结束循环.
//按照题意可以假设只对应唯一答案,并且索引从1开始计算,最后找的答案下标需要加一.


vector<int> twoSum(vector<int>& numbers, int target) {
  int head = 0, rear = numbers.size() - 1;
  
  while(head < rear)
  {
    if(numbers[head] + numbers[rear] == target)
      return {head+1,rear+1};
    else if(numbers[head] + numbers[rear] < target)
      ++head;
    else
      --rear;
   }
   //如果没有解,返回数对
   return {-1,-1};
}
