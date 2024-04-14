//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//private:
//    unordered_map<char, int> symbolValues = {
//        {'I', 1},
//        {'V', 5},
//        {'X', 10},
//        {'L', 50},
//        {'C', 100},
//        {'D', 500},
//        {'M', 1000},
//    };
//public:
//    int romanToInt(string s) {
//        int res = 0;
//        int size = s.length();
//        for (int i = 0; i < size; i++) {
//            int val = symbolValues[s[i]];
//            if (i < size - 1 && val < symbolValues[s[i + 1]]) {
//                res -= val;
//            }
//            else res += val;
//        }
//        return res;
//    }
//};
//
//int main() {
//    Solution sol;
//    string s = "III";
//    cout << sol.romanToInt(s) << endl;
//    return 0;
//}   