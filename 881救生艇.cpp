class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0;
        int light=0;int heavy=people.size()-1;
        while(light<=heavy){
            if(people[light]+people[heavy]>limit){
                --heavy;
            }else{
                ++light;
                --heavy;
            }
            ++count;
        }
        return count;
    }
};
