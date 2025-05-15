class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> hs = new HashSet<>();
        
        for (int num : nums1) {
            hs.add(num);
        }
        ArrayList<Integer> ar = new ArrayList<>();
        for (int num : nums2) {
            if (hs.contains(num)) {
                ar.add(num);
                hs.remove(num);
            }
        }

        int[] rslt = new int[ar.size()];
        
        for (int i = 0; i < rslt.length; i ++) {
            rslt[i] = ar.get(i);
        }
        return rslt;

    }
}
