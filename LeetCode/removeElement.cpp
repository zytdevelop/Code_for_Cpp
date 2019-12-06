//原地移除数组中指定的元素

//思路:双指针,如果快指针所指元素不是指定删除的元素,两个指针同时前移;如果快指针指向的元素是指定删除的元素,那么慢指针留在原地,快指针前移,
//直到下一个非删除元素,然后覆盖需要移除的元素,以此类推,返回慢指针的索引.
int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for(int i = 0; i < nums.size(); ++i)
    {
        if(nums[i] != val)
        {
            nums[k] = nums[i];
            ++k;
        }
    }
    return k;
}
