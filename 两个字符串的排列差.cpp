////
//// Created by Lenovo on 2024/5/12.
////
//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int findPermutationDifference(string s, string t) {
//        int sum=0;
//        for(int i=0;i<s.size();i++){
//            for(int j=0;j<t.size();j++){
//                if(t[j]==s[i]){
//                   sum+=abs(i-j);
//                }
//            }
//        }
//        return sum;
//    }
//};
//
//class Solution {
//public:
//    int findPermutationDifference(string s, string t) {
//        int pos1[26] = {0}, pos2[26] = {0};
//        for (int i = 0; i < s.size(); i++) pos1[s[i] - 'a'] = i;
//        for (int i = 0; i < t.size(); i++) pos2[t[i] - 'a'] = i;
//        int ans = 0;
//        for (int i = 0; i < 26; i++) ans += abs(pos1[i] - pos2[i]);
//        return ans;
//    }
//};


//int main() {
//    Solution s;
//    string s1 = "abc";
//    string t1 = "bac";
//    cout << s.findPermutationDifference(s1, t1) << endl;
//    return 0;
//}