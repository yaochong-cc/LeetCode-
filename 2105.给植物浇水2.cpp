class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int ans =0;
        int i=0;int j=plants.size()-1;
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
        if(i==j&&max(a,b)<plants[i]){
            ans++;
        }
        return ans; 
    }
};
