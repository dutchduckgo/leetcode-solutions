class Solution {
public:
    int numberOfSteps(int num) {
        int rslt = 0;
        int i = num;
        while (i != 0) {
            if (i % 2 == 0) i /= 2;
            else i -= 1;
            rslt = rslt + 1;

        }

        return rslt;
    }
};
