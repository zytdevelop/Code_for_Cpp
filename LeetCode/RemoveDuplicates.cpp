int removeDuplicates(vector<int>& nums) {
  if(nums.empty()) return 0;
  
  //快慢指针,如果如果遇到相同的元素,快指针前进,慢指针不动;元素不相同时,慢指针右移,并把第二个重复的元素覆盖.最后返回慢指针下标(索引从0开始,所以返回值加1)
  int slow = 0;
  for(int i = 0; i < nums.size(); i++)
  {
    if(nums[slow] != nums[i])
    {
      ++slow;
      nums[slow] = nums[i];
    }
  }
  return i+1;
}
