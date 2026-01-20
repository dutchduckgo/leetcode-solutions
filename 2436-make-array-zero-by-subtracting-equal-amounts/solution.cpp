class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> bag;
        for (int n : nums) {
            bag.insert(n);
        }

        if (bag.find(0) == bag.end()) return bag.size();
        return bag.size() - 1;
    }
};
