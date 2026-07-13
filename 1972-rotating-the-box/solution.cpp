class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();

        vector<vector<char>> box(n, vector<char>(m));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                box[j][m - 1 - i] = boxGrid[i][j];
            }
        }

        // box is n x m
        for (int col = 0; col < m; col++) {
            int emptyRow = n - 1;

            for (int row = n - 1; row >= 0; row--) {
                if (box[row][col] == '*') { //obstacle
                    emptyRow = row - 1;
                }
                else if (box[row][col] == '#') {
                    swap(box[row][col], box[emptyRow][col]);
                    emptyRow--;
                }
            } 
        }
        return box;
        

    }
};
