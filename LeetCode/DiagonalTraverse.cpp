vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    int m = matrix.size();
    if(m == 0) return result;
    int n = matrix[0].size();
    if(n == 0) return result;

    bool bXFlag = true;

    for(int i = 0; i < m + n; i++)
    {
        int pm = bXFlag ? m : n;
        int pn = bXFlag ? n : m;

        int x = (i < pm) ? i : pm - 1;
        int y = i - x;

        while(x >= 0 && y < pn)
        {
            result.push_back(bXFlag ? matrix[x][y] : matrix[y][x]);
            x--;
            y++;
        }
        bXFlag = !bXFlag; 
    }
    return result;
}
