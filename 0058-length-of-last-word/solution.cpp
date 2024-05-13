class Solution {
public:
    int lengthOfLastWord(string s) {
        int rslt = 0;
        bool noSpace = false;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                rslt++;
                noSpace = true;
            }
            else if (noSpace) {
                break;
            }
            
        }
        return rslt;
    }
};
