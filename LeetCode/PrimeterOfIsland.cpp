//解题思路:暴力遍历每个岛屿的四个方向是否存在连续的岛屿,如果存在,周长的值减一.

int islanPerimeter(vector<vector<int>>& grid){
  int perimeter = 0;
  for(int i = 0; i < grid.size(); i++)
  {
    for(int j = 0; j < grid[0].size(); j++)
    {
      if(grid[i][j] == 1)
      {
        perimeter += 4;
        if(i > 0 && grid[i -1][j] == 1)perimeter -= 1;
        if(i < grid.size() -1 && grid[i][j] == 1)perimeter -= 1;
        if(j > 0 && grid[i][j-1] ==1)perimeter -= 1;
        if(j < grid[0].size() - 1 && grid[i][j+1] == 1)perimeter -=1;
      }
    }
    return perimeter;
}
