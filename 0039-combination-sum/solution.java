class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> nums = new ArrayList<>();

        help (candidates, target, 0, new ArrayList<>(), 0, nums);
        return nums;
    }
    private void help(int[] candidates, int target, int index, List<Integer> combo, int total, List<List<Integer>> res) {
        if (total == target) {
            res.add(new ArrayList<>(combo));
            return;
        }
        if (total > target || index >= candidates.length) {
            return;
        }
        combo.add(candidates[index]);
        help (candidates, target, index, combo, total + candidates[index], res);
        combo.remove(combo.size() - 1);
        help (candidates, target, index + 1, combo, total, res);
    }
}
