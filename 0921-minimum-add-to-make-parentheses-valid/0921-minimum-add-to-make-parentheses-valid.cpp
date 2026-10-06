class Solution {
public:
    int minAddToMakeValid(string s) {
        int o = 0;
        int c = 0;

        for (auto ch : s) {
            if (ch == '(') {
                o++;
            } 
            else {
                if (o > 0) {
                    o--;
                } 
                else {
                    c++;
                }
            }
        }

        return c + o;
    }
};
