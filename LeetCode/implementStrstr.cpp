int strStr(string haystack, string needle){
  //  首先处理特殊情况
  //  按照题意,如果needle为空,则返回0
  if(needle.empty()) return 0;
  //子串长度比母串大,返回-1
  if(haystack.length() < needle.length()) return -1;
  
  
  //思路:采用双指针同时遍历两个字符串
  int i = 0, j = 0;
  
  while(i < haystack.length())
  {
    if(haystack[i] == needle[j])
    {
      i++;
      j++;
      if(j >= needle.length())
        return i - j;
    }
    else
    {
      if(j < needle.length())
      {
        i = i - j + 1;
        j = 0;
      }
      else
      {
        i++;
      }
    }
  }
  return -1;
}
