////
//// Created by Lenovo on 2024/5/14.
////
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
//class Solution {
//    string Map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//public:
//    vector<string> letterCombinations(string digits) {
//        int n=digits.size();
//        vector<string> res;
//        if(n==0) return res;
//        string path(n,0);
//        //lambda表达式
//        function<void(int)>dfs =[&](int i){
//            if(i==n){
//                res.emplace_back(path);
//                return ;
//            }
//            for(char c:Map[digits[i]-'0']){
//                path[i]=c;
//                dfs(i+1);
//            }
//        };
//        dfs(0);
//        return res;
//    }
//};