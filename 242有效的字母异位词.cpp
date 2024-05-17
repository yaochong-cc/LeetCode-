////
//// Created by Lenovo on 2024/5/17.
////
//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_map>
//#include <algorithm>
//using namespace std;
////class Solution {
////public:
////    bool isAnagram(string s, string t) {
////        if(s.size()!=t.size()){
////            return false;
////        }
////        unordered_map<char,int> map;
////        for(char ch:s){
////            map[ch]++;
////        }
////        for(char ch:t){
////            map[ch]--;
////            if(map[ch]<0){
////                return false;
////            }
////        }
////        return true;
////    }
////};
//
////class Solution {
////public:
////    bool isAnagram(string s, string t) {
////        if(s.size()!=t.size()){
////            return false;
////        }
////        vector<int> res(26,0);
////        for(auto & ch:s){
////            res[ch-'a']++;
////        }
////        for(auto&ch:t){
////            res[ch-'a']--;
////            if(res[ch-'a']<0){
////                return false;
////            }
////        }
////        return true;
////    }
////};
//class Solution {
//public:
//    bool isAnagram(string s, string t) {
//        if(s.size()!=t.size()){
//            return false;
//        }
//        sort(s.begin(),s.end());
//        sort(t.begin(),t.end());
//        return s==t;
//    }
//};
//
//int main(){
//    string s = "anagram";
//    string t = "nag a ram";
//    Solution sol;
//    bool res = sol.isAnagram(s,t);
//    cout<<res<<endl;
//    return 0;
//}