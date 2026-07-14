class Solution {
private:
    double dfs(const string& cur, const string& end, unordered_map<string, unordered_map<string, double>>& adj, unordered_set<string>& visited) {
        if (!adj.count(cur) || !adj.count(end)) {
            return -1.0;
        }
        if (cur == end) {
            return 1.0;
        }
        visited.insert(cur);
        for (auto& [next, weight] : adj[cur]) {
            if (visited.count(next)) continue;
            double result = dfs(next, end, adj, visited);
            if (result != -1.0) {
                return weight * result;
            }
        }
        return -1.0;
    }
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {

        unordered_map<string, unordered_map<string, double>> adj;
        int n = equations.size();

        for (int i = 0; i < n; i++) {
            adj[equations[i][0]][equations[i][1]] = values[i];
            adj[equations[i][1]][equations[i][0]] = 1.0 / values[i];
        }

        vector<double> res;
        for (auto& q : queries) {
            unordered_set<string> visited;
            string start = q[0];
            string end = q[1];
            res.push_back(dfs(start, end, adj, visited));
        }
        return res;


        /*

        hm
        a -> {b, 2.0}, {c, 3.0}
        b -> {c, 3.0}

        query: a / c
        a / c = (a / b) / (c / b) or 


        a and c must have an equation where they have common divisor

        */

        
    }
};
