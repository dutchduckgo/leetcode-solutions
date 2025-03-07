class Solution {
    public int maxArea(int[] height) {
        int i = 0, j = height.length - 1;
        int w = 0, temp;
        while (i != j) {
            if (height[i] > height[j]) {
                temp = height[j] * (j - i);
                j--;
            } else {
                temp = height[i] * (j - i);
                i++;
            }
            if (temp > w) w = temp;
        }
        return w;
    }
}
