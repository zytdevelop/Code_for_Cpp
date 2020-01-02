/*

LeetCode No.942 字符串匹配


给定只含 "I"（增大）或 "D"（减小）的字符串 S ，令 N = S.length。

返回 [0, 1, ..., N] 的任意排列 A 使得对于所有 i = 0, ..., N-1，都有：

如果 S[i] == "I"，那么 A[i] < A[i+1]
如果 S[i] == "D"，那么 A[i] > A[i+1]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/di-string-match
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

思路:根据字符串S的长度确认使用的整数范围,最大值设置为S的长度N,最小值为0;
设置两个端点low == 0(最小值), high == N(最大值);
如果S[0] == 'I' ,将A[0]设置为low 那么必定满足 A[0] < A[1];
如果S[0] == 'D' ,将A[0]设置为high那么必定满足 A[0] > A[1];
剩下就是解决N - 1 个相同的问题,这里使用迭代的方法实现.
 
*/

class Solution {
public:
    vector<int> diStringMatch(string S) {
        int N = S.length();
        int low = 0, high = N;
        vector<int> res;
        
        if(N == 0) return res;
        
        for(int i = 0; i < N; ++i)
        {
            if(S[i] == 'I')
            {
                res.push_back(low++);
            }
            else
            {
                res.push_back(high);
            }
        }
        
        res.push_back(low); //其实最后low和high是相同的值,用哪个值都无所谓
        return res;
    }
};
