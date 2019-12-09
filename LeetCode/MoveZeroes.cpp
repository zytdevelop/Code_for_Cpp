void moveZeroes(vector<int>& nums) {
  if(nums.empty()) return; //空数组直接结束程序
  int slow = 0;
  
  //用双指针的方法将所有的非零元素安排在数组的正确位置.
  for(int i = 0; i < nums.size(); i++)
  {
    if(nums[i])
      nums[slow++] = nums[i];
  } 
  //从慢指针下标开始,之后所有元素都设置为零
  for(int i = slow; i < nums.size(); i++)
    nums[i] = 0;
}
