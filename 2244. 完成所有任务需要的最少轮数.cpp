//
// Created by Lenovo on 2024/5/14.
//
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> cnt;
        for(int t:tasks){
            cnt[t]++;
        }
        int ans=0;
        for(auto&[_,c]:cnt){
            if(c==1){
                return -1;
            }
            ans+=(c+2)/3;
        }
        return ans ;
    }
};
int main(){
    Solution s;
    vector<int> tasks{3,2,4,3,2,1,3};
    cout<<s.minimumRounds(tasks)<<endl;
    return 0;
}