/*
LeetCode No.848 字母移位

有一个由小写字母组成的字符串 S，和一个整数数组 shifts。

我们将字母表中的下一个字母称为原字母的 移位（由于字母表是环绕的， 'z' 将会变成 'a'）。

例如·，shift('a') = 'b'， shift('t') = 'u',， 以及 shift('z') = 'a'。

对于每个 shifts[i] = x ， 我们会将 S 中的前 i+1 个字母移位 x 次。

返回将所有这些移位都应用到 S 后最终得到的字符串。

思路:从题意出发,对于第i个字母对应的shifts[i]会将S中的前i+1个字母移位x次(下标从0开始,所以是前i+1个字母).
那么从shifts数组最后一项n出发,第n个字母需要移动shifts[n]次,
第n-1个字母需要移动shifts[n]+shifts[n-1],
以此类推,得到每个对应位置i的字母所需要移动的次数为逆序的shifts数组前i项和,可以用栈来存储第i个字母需要移位次数的和.

其中还需要考虑小写字母是环绕的,即'z'移位一次将会变成'a'.
*/

class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        if(S.empty()) return "";
        string ans = "";
        int len = S.size();
        stack<int> move;
        int sum = 0;
        for(int i = shifts.size() - 1; i >= 0; i--)
        {
            sum += shifts[i] % 26;
            move.push(sum);
        }
        
        for(int i = 0; i < len; i++)
        {
            S[i] = ((S[i] - 'a' + move.top()) % 26) + 'a';
            move.pop();
            ans += S[i];
        }
        return ans;
    }
};
