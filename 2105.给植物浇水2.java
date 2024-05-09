class Solution {
    public int minimumRefill(int[] plants, int capacityA, int capacityB) {
        int n=plants.length;
        int ans =0;
        int i=0;int j=n-1;
        int a=capacityA;int b=capacityB;

        while(i<j){
            
           
            if(a<plants[i]){
                ans++;
                a=capacityA;
            }
            a-=plants[i];
            i++;
           
            if(b<plants[j]){
                ans++;
                b =capacityB;
            } 
            b-=plants[j];
            j--;

        }
        if(i==j&&Math.max(a,b)<plants[i]){
            ans++;
        }
        return ans; 
    }
}
