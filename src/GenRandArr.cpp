int *generateRandomArray(int arraysize, int rangeLeft, int rangeRight){
  assert(rangeLeft <= rangeRight); //区间边界输入错误,中断程序
  
  int *arr = new int[n];  创建长度为n的数组
  
  srand(time(NULL)); //生成随机种子
  
  for(int i = 0; i < n; i++)
  {
    arr[i] = rand() % (rangeRight - rangeLeft  + 1) + rangeLeft;  //保证随机数在指定区间内
  }
  return arr;
}

