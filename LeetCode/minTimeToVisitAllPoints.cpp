/*
LeetCode No.1266.Minimum Time Visiting All Points
解题方法:
所有点的切比雪夫距离之和就是所求答案
*/
int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int ans = 0;
    int x0 = points[0][0],y0 = points[0][1];
    for(int i = 1; i < points.size(); i++)
    {
        int x1 = points[i][0],y1 = points[i][1];
        ans += max(abs(x0 - x1),abs(y0 - y1));
        x0 = x1;
        y0 = y1;

    }
    return ans;
}
