int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int max = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]) 
            ++count;
        else
            count = 0;
        max > count ? :max = count; 
    }
    return max;
}
