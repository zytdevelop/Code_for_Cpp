/*
题目:Given an array, rotate the array to the right by k steps, where k is non-negative.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotate-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

解题思路:列出具体几个例子可以观察到,旋转数组存在环状替换.但是要考虑环的元素不包含数组的所有元素,每次完成一个环状循环就要将替换元素的索引加一,
直到遍历完所有数组元素.

*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int count = 0;
        for (int start = 0; count < nums.size(); start++){
            int current = start;
            int prev = nums[start];
            do{
                int next = (current + k) % nums.size();
                int temp = nums[next];
                nums[next] = prev;
                prev = temp;
                current = next;
                count++;
            }while(start != current);
        }
    }
};
