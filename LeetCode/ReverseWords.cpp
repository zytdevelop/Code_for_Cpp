string reverseWords(string s) {
  string ans,str;
  stack<string> tmp;    //使用vector 也可以,使用stack运行时间更少
  stringstream ss(s);
  
  //利用字符串流处理单词中间的冗余空格
  while(ss >> str)
  {
    tmp.push(str);
  }
  
  //再利用stack先进后出的性质直接完成单词的反转
  while(!tmp.empty())
  {
    ans += tmp.top(); //获取栈顶的单词
    tmp.pop();        //以获取的单词,出栈;然后继续下一轮循环
    if(!tmp.empty())
    {
      ans += " ";     //每一轮循环即每一个单词出栈,后面接一个空格.
    }
  }
  return ans;
}
