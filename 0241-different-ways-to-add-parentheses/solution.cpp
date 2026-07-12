class Solution {
public:
    static int perform(int x, int y, char op) {
        if (op == '+') return x + y;
        if (op == '-') return x - y;
        if (op == '*') return x * y;
        return 0;
    }

    vector<int> diffWaysToCompute(string exp) {
        vector<int> res;

        for (int i = 0; i < exp.size(); i++) {
            char c = exp[i];

            if (isdigit(c)) continue;

            vector<int> left = diffWaysToCompute(exp.substr(0, i));
            vector<int> right = diffWaysToCompute(exp.substr(i + 1));

            for (int x : left) {
                for (int y : right) {
                    int val = perform (x, y, c);
                    res.push_back(val);
                }
            }
        }
        if (res.empty()) {
            res.push_back(stoi(exp));
        }
        return res;
    }
};
