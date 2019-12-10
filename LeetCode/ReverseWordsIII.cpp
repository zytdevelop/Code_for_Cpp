string reverseWords(string s) {
  int head = 0, rear = 0;  
  int size = s.size();
  //双指针遍历, head 指向一个单词的头部,rear指向一个单词的尾部;每完成一个单词的反转,更新head和rear的位置.
  for(int i = rear; i < size - 1; i++)
  {
    if(s[i] != ' ') ++rear;
    else
    {
      reverse(s.begin() + head, s.begin() + rear);
      head = rear + 1;
      rear = head;
    }
    
    rear++;
    reverse(s.begin() + head, s.begin() + rear);
    
    return s;
}
