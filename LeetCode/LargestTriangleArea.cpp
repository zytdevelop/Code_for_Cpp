/*
LeetCode No.812 最大三角形面积
给定包含多个点的集合，从其中取三个点组成三角形，返回能组成的最大三角形的面积。


思路1:海伦公式

思路2:鞋带公式
*/



class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double res = 0;
        for(int i = 0; i < points.size() ; i++)
        {
            for(int j = i + 1; j < points.size() ; j++)
            {
                for(int k = j + 1; k < points.size(); k++)
                    res = max(res,area(points[i],points[j], points[k]));
            }
        }

        return res;
    }

    double area(vector<int> p1,vector<int> p2, vector<int> p3){
        return abs(p1[0] * p2[1] + p2[0] * p3[1] + p3[0] * p1[1] - p1[1] * p2[0] - p2[1] * p3[0] - p3[1] * p1[0])  * 0.5;
    }
};
