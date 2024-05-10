#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0;
        for (int j = 1; j < nums.size(); j ++) {
            if (nums[i] != nums[j]) {
                i ++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
        /*
        if (nums.empty()) return 0;
        int k = 1;  
        for (auto it = nums.begin() + 1; it != nums.end(); ) {
            if (*it != nums[k - 1]) {    
                nums[k++] = *it++; 
            }
            else {
                it = nums.erase(it);
            }
        }
        return k;
        */
    }
};

