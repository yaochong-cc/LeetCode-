////
//// Created by Lenovo on 2024/5/28.
////
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//class Solution {
//    bool isVowelString(const string &word) {
//        return isVowelLetter(word[0]) && isVowelLetter(word.back());
//    }
//
//    bool isVowelLetter(char c) {
//        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
//    }
//
//public:
//    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
//        vector<int> ans(words.size()+1,0);
//
//        for(int i=0;i<words.size();i++){
//            int value=isVowelString(words[i])?1:0;
//           ans[i+1]=ans[i]+value;
//        }
//        vector<int>res;
//        for(int j=0;j<queries.size();j++){
//            res.push_back(ans[queries[j][1]+1]-ans[queries[j][0]]);
//        }
//        return res;
//    }
//};
//int main(){
//    Solution s;
//    vector<string> words={"aba","bcb","ece","aa","e"};
//    vector<vector<int>> queries={{0,2},{1,4},{1,1}};
//    vector<int> res=s.vowelStrings(words,queries);
//    for(int i=0;i<res.size();i++){
//        cout<<res[i]<<" ";
//    }
//    return 0;
//}