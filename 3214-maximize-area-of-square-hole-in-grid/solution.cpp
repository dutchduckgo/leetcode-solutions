class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());

        // 2, 3, 6, 7, 8, 9, 10, 12

        int hBestLen = 1;
        int hCurLen = 1, hx = 0, hy = 0;
        int hCurStart = 0;
        for (int i = 1; i < hBars.size(); i++) {
            if (hBars[i] == hBars[i - 1] + 1) {
                hCurLen ++;
            } else {
                hCurStart = i;
                hCurLen = 1;
            }

            if (hCurLen > hBestLen) {
                hx = hCurStart;
                hy = i;
                hBestLen = hCurLen;
            }
        }

        int vBestLen = 1;
        int vCurLen = 1, vx = 0, vy = 0;
        int vCurStart = 0;
        for (int i = 1; i < vBars.size(); i++) {
            if (vBars[i] == vBars[i - 1] + 1) {
                vCurLen ++;
            } else {
                vCurStart = i;
                vCurLen = 1;
            }

            if (vCurLen > vBestLen) {
                vx = vCurStart;
                vy = i;
                vBestLen = vCurLen;
            }
        }

        // cout << vx << vy << endl;
        int finalLen = min (hy - hx + 2, vy - vx + 2);

        return finalLen * finalLen;
    
    }
};
