class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> rslt(2);
        int i = 0; 
        int j = numbers.size() - 1;
        while (i < j) {
            int sum = numbers[i] + numbers[j];
            // cout << numbers[i] << numbers[j] << endl;
            if (sum == target) {
                rslt[0] = i + 1;
                rslt[1] = j + 1;
                break;
            }
            if (sum > target) {
                j --;
            } else {
                i ++;
            }
        }
        return rslt;
    }
};
