class Solution {
public:
    int maxDepth(string s) {
         int o = 0;
        int maxlen = 0;

        for (char ch : s) {
            if (ch == '(') {
                o++;
                maxlen = max(maxlen, o);
            }
            else if (ch == ')') {
                o--;
            }
        }

        return maxlen;
    }
};