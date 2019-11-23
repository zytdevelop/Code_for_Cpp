int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int max = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]) 
            ++count;
        else
            count = 0;
        max = max > count ? max : count;  //每次计数都要比较,确认最大的连续数
    }
    return max;
}
