/*
LeetCode No.53. 最大子序和
给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

/*


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = nums[0], maxSum = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            curSum = nums[i] > (nums[i] + curSum) ? nums[i] : (nums[i] + curSum);
            maxSum = curSum > maxSum ? curSum : maxSum;
        }
        return maxSum;
    }
};
