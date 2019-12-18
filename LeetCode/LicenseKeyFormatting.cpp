/*
LeetCode No.482. 密钥格式化
给定一个密钥字符串S，只包含字母，数字以及 '-'（破折号）。N 个 '-' 将字符串分成了 N+1 组。
给定一个数字 K，重新格式化字符串，除了第一个分组以外，每个分组要包含 K 个字符，第一个分组至少要包含 1 个字符。两个分组之间用 '-'（破折号）隔开，
并且将所有的小写字母转换为大写字母。

思路:1.小写字母转换为大写  -> 2. 逆序存储字符串,同时把原有的全部'-'删除 -> 3.按照给定分组大小K进行分组,同时添加对应的'-'

/*


class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string tmp;
        string ans = "";
        int len = S.size();

        for(int i = len - 1; i >= 0; i--)
        {
            if(S[i] >= 'a' && S[i] <= 'z')
            {
                S[i] -= 32;
            }
            if(S[i] == '-')
                continue;
            tmp += S[i];
        }


        int cnt = 0;
        for(int i = 0; i < tmp.size(); i++)
        {
            if(cnt == K)
            {
                cnt = 0;
                ans += '-';
            }
            cnt++;
            ans += tmp[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
