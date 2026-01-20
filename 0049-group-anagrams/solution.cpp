class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> hm;

        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            vector<int> wordHM(26, 0);
            for (int j = 0; j <s.size(); j++) {
                wordHM[s[j] - 'a']++;
            }
            hm[wordHM].push_back(s);
        }

        vector<vector<string>> res;
        for (auto& [key, value] : hm) {
            res.push_back(value);
        }
        return res;
        

    }
};
