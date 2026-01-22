class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n = security.size();
        vector<int> daysBefore(n, 0);
        vector<int> daysAfter(n, 0);

        // t = 2
        // 5 3 3 3 5 6 2
        // 0 1 2 2 0 0 1
        // 0 4 3 2 1 0 0

    
        for (int i = 1; i < n; i++) {
            if (security[i] <= security[i - 1]) 
                daysBefore[i] = 1 + daysBefore[i - 1];

        }

        for (int i = n - 2; i >= 0; i--) {
            if (security[i] <= security[i + 1]) 
                daysAfter[i] = 1 + daysAfter[i + 1];
      
        }

        vector<int> res;
        for (int i = time; i < n - time; i++) {
            if (daysBefore[i] >= time && daysAfter[i] >= time) {
                res.push_back(i);
            }
        }
        return res;

    }
};
