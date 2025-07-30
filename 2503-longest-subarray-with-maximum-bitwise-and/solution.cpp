class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int big = 0;
        int curLen = 1;
        int maxLen = 1;
        for (int x : nums) {
            if (x > big) {
                big = x;
                curLen = 1;
                maxLen = 1;
            } else if (x == big) {
                if (curLen > 0) {
                    curLen ++;
                } else 
                    curLen = 1;    
            } 
            else {
                if (curLen > maxLen) maxLen = curLen;
                curLen = 0; 
            }
        }
        if (curLen > maxLen) return curLen;
        return maxLen;
    }
};
