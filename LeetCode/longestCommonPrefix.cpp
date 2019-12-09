string longestCommonPrefix(vector<string>& strs) {
  string ans = "";
  if(strs.empty()) return ans;
  //双指针,以第一个字符串为基准进行比较,遍历所有的字符串的每个一个字符,最后得到最长的公共前缀
  for(int i = 0; i < strs[0].length(); i++)
  {
    for(int j = 1; j < strs.size(); j++)
    {
      if(strs[0][i] != strs[j][i])
        return "";
    }
    ans += strs[0][i];
  }
  
  return ans;
}
