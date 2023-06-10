class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int cur = nums[0];
        vector<int> rslt;
        rslt.push_back(cur);
        for (int i = 1; i < nums.size(); i ++) {
            rslt.push_back(cur + nums[i]);
            cur += nums[i];
        }
        return rslt;
    }
};
