string addBinary(string a, string b){
  int alen = a.size(),blen = b.size();
  
  //while循环的目的是将两个字符串的长度变为一致,便于相加之后的溢出处理
  while(alen != blen)
  {
    if(alen > blen)
    {
      b = '0' + b;
      ++blen;
    }
    else
    {
      a = '0' + a;
      ++alen;
    }
  }
  //for循环 从后往前遍历对应位置相加,进位直接前移,保留最高位作为特殊情况处理.
  for(int i = alen - 1; i > 0; --i)
  {
    a[i] = a[i] - '0' + b[i];
    if(a[i] >= '2')
    {
      a[i] = (a[i] - '0') % 2 + '0';
      a[i-1] = a[i-1] + 1;
    }
  }
  //存在最高位进位情况,插入'1'
  a[0] = a[0] - '0' + b[0];
  if(a[0] >= '2')
  {
    a[0] = (a[0] - '0')%2 + '0';
    a = '1' + a;
  }
  return a;
}
