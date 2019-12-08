//思路: 双指针+滑动窗口. 从头开始遍历数组进行累加,直到累加和大于等于指定的值s,窗口左端开始右移,减少窗口的长度.直到最后直到窗口长度达到最小值.


int minSubArrayLen(int s, vector<int>& nums) {
    int ans = INT_MAX; // include<limits.h>
    
    int left = 0,sum = 0;
    
    for(int i = 0; i < nums.size(); i++)
    {
      sum += nums[i];
      while(sum >= s)//while循环实现滑动窗口
      {
        ans = min(ans, i - left + 1);
        sum -= nums[lef++];
      }
    }
    return ans != INT_MAX ? ans : 0;
}
