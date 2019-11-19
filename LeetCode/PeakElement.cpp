/*利用了连续的两个元素 nums[j]nums[j] 和 nums[j + 1]nums[j+1] 不会相等这一事实。于是，我们可以从头开始遍历 numsnums 数组。
每当我们遇到数字 nums[i]nums[i]，只需要检查它是否大于下一个元素 nums[i+1]nums[i+1] 即可判断 nums[i]nums[i] 是否是峰值。

作者：LeetCode
链接：https://leetcode-cn.com/problems/find-peak-element/solution/xun-zhao-feng-zhi-by-leetcode/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() - 1 ; ++i)
        {
            if(nums[i] > nums[i + 1])
                return i;
        }
        return nums.size() - 1; 
    }
};
