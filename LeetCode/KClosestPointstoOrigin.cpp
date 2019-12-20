/*

LeetCode No.973最接近原点的K个点


思路:先求出每个点到原点的距离,将距离数组排序,找到第K个点的距离distK;再回到二维数组去寻找比distK小的点,存放到ans数组.

*/





class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<int> tmp;
        for(int i = 0; i < points.size(); i++)
        {
            tmp.push_back(dist(points[i]));
        }

        sort(tmp.begin(),tmp.end());
        int distK = tmp[K-1];

        vector<vector<int>> ans;
        for(int i = 0; i < points.size(); i++)
        {
            if(dist(points[i]) <= distK)
                ans.push_back(points[i]);
        }


        return ans;

    }
    int dist(vector<int>& points)
    {
        return (points[0])*(points[0]) + (points[1])*(points[1]);
    }
};
