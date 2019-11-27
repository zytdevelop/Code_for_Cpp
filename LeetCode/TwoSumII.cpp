//官方解答:利用双指针的原因是,数组已被排序.那么首位两数相加,如果结果大于目标值,那么尾部元素前移,进行寻找;如果结果小于目标值,头部元素后移进行寻找.

vector<int> twoSum(vector<int>& numbers, int target) {
    int low = 0, high = numbers.size() -1;
    while(low < high)
    {
        int sum = numbers[low] + numbers[high];
        if(sum == target)
        {
            return {low+1, high+1};
        }
        else if(sum < target)
            ++low;
      else
            --high;
    }
    return {-1,-1};
}
