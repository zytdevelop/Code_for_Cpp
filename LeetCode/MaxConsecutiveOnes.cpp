//LeeCode No.485 Given a binary array, find the maximum number of consecutive 1s in this array.

//思路:用临时变量max记录每个连续1的数,每个循环中计数变量count都与max进行比较,取其中的最大值

int findMaxConsecutiveOnes(vector<int>& nums) {
  int count = 0;
  int max = 0;
  
  for(int i = 0; i < nums.size(); ++i)
  {
    if(nums.[i])
      count++;
    else
      count = 0;
    max = max > count ? max : count;
  }
  return max;

}
