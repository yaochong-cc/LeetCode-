class Solution {
    public long totalCost(int[] costs, int k, int candidates) {

        PriorityQueue<Integer> pql = new PriorityQueue<>();
        PriorityQueue<Integer> pqr = new PriorityQueue<>();

        int n = costs.length;
        int l = 0;
        int r = n - 1;

        long res = 0;

        while (k-- > 0) {
            while (l <= r && pql.size() < candidates) {
                pql.offer(costs[l++]);
            }
            while (l <= r && pqr.size() < candidates) {
                pqr.offer(costs[r--]);
            }
            int a = 0x3f3f3f3f;
            int b = 0x3f3f3f3f;
            if (!pql.isEmpty()) a = pql.peek();
            if (!pqr.isEmpty()) b = pqr.peek();
            if (a > b) {
                res += pqr.peek();
                pqr.poll();
            }
            if (a <= b) {
                res += pql.peek();
                pql.poll();
            }
        }
        return res;
     }
}
