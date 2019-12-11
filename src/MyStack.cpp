class MyStack{
public:
  
  //initialize structure
  MyStack(){}
  
  /** Delete an element from the stack. Return true if the operation is successful. */
  bool pop()
  {
    if(isEmpty())
      return false;
    data.pop_back();
    return true;
  }
  
  
 /** Insert an element into the stack. */
  void push(int x)
  {
    data.push_back(x);
  }
  
 /** Checks whether the queue is empty or not. */
  bool isEmpty()
  {
    return data.empty();
  }
  
 /** Get the top item from the stack. */
  int top()
  {
    return data.back();
  }
  
private:
  vector<int> data;
};
