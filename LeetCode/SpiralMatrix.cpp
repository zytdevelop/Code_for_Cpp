vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    if(matrix.empty())  return ans;

    int up = 0;
    int down = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while(true)
    {
        for(int i = left; i <= right; ++i)  ans.push_back(matrix[up][i]);  //从左到右遍历第一行
        if(++up > down)  break;//遍历结束,删除第一行.下面三个循环相同原理,最后边界交错跳出循环,返回结果.
        for(int i = up; i<= down; ++i)  ans.push_back(matrix[i][right]);
        if(--right < left)  break;
        for(int i = right; i >= left; --i)  ans.push_back(matrix[down][i]);
        if(--down < up)  break;
        for(int i = down; i >= up; --i)  ans.push_back(matrix[i][left]);
        if(++left > right)  break;
    }

    return ans;
}
