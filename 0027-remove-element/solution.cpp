class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        while (i < n){
            if (nums[i] == val) {
                nums[i] = nums[n - 1];
                nums[n - 1] = val;
                n --;
            }
            else i ++;
        }            
    return n;

    }
        //return nums;
    
};
