//解题思路:求出整个数组的和,再用总和减去从左到右累加和,如果得到的差和累加和相等,那么此时的索引就是所求的目标索引


int pivotIndex(vector<int>& nums) {
    int sum = 0, leftsum = 0;
    for(int i = 0; i < nums.size(); i++)sum += nums[i];
    for(int i = 0; i < nums.size(); i++)
    {
        if(leftsum == sum - leftsum - nums[i]) return i;
        leftsum += nums[i];
    }
    return -1;
}
