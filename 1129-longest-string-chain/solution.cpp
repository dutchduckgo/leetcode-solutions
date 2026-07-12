class Solution {
public:
    static bool compare (const string &l, const string &r) {
        return l.size() < r.size();
    }
    int longestStrChain(vector<string>& words) {
        unordered_map<string, int> dp;
        int res = 1;
        sort(words.begin(), words.end(), compare);

        for (string w : words) {
            dp[w] = 1;
            for (int i = 0; i < w.size(); i++){ 
                string prev = w.substr(0, i) + w.substr(i + 1);
                if (dp.find(prev) != dp.end()) {
                    dp[w] = max(dp[w], dp[prev] + 1);
                    res = max(res, dp[w]);
                }
            }
        }
        return res;
    }
};
