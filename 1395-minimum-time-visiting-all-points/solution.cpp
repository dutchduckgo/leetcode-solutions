class Solution {
public:

    int calcTime (vector<int>& v1, vector<int>& v2) {
        return max( abs(v2[0] - v1[0]), abs(v2[1] - v1[1]) );
    }

    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int total = 0;

        for (int i = 0; i < points.size() - 1; i ++) {
            total += calcTime(points[i], points[i + 1]);
        }    

        return total;
    }
};
