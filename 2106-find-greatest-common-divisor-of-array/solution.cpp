class Solution {
public:
    int gdc (int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int small = *min_element(nums.begin(), nums.end());
        int large = *max_element(nums.begin(), nums.end());

        return gdc(large, small);
    }
};
