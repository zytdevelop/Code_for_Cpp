/*
question:
Count the number of segments in a string, where a segment is defined to be a contiguous sequence of non-space characters.

Please note that the string does not contain any non-printable characters.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/number-of-segments-in-a-string
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

解题思路:从字符串的角度出发,理解一个单词的含义.在字符串中一个单词意味着从一个空格开始,到下一个空格结束,这样的子串就叫单词.
*/


class Solution {
public:
    int countSegments(string s) {
        bool mark = true;
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '&&mark){
                ++count;
                mark = false;
            }
            else if(s[i] == ' '){
                mark = true;
            }
        }
        return count;
    }
};
