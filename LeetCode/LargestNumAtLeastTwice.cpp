int dominantIndex(vector<int>& nums) {
    int len = size(nums);
    int index = 0;
    for(int i = 0; i < len; i++)
    {
        if(nums[i] > nums[index])
        {
            index = i;
        }
    }
    for(int i = 0; i < len; i++)
    {
        if(index!=i &&nums[index] < 2 * nums[i])
            return -1;
    }
    return index;
}
