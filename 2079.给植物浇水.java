class Solution {
    public int wateringPlants(int[] plants, int capacity) {
        int n = plants.length;
        int ans = n;
        int water = capacity;
        for (int i = 0; i < n; i++) {
            if (water < plants[i]) {
                ans += i * 2;
                water = capacity;
            }
            water -= plants[i];
        }
        return ans;
    }
}
