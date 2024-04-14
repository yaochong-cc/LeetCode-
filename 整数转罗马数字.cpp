//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<unordered_map>
//
//using namespace std;
//
//
//
//const pair<int, string> valueSymbols[] = {
//    {1000, "M"},
//    {900,  "CM"},
//    {500,  "D"},
//    {400,  "CD"},
//    {100,  "C"},
//    {90,   "XC"},
//    {50,   "L"},
//    {40,   "XL"},
//    {10,   "X"},
//    {9,    "IX"},
//    {5,    "V"},
//    {4,    "IV"},
//    {1,    "I"},
//};
//
//class Solution {
//
//public:
//    string intToRoman(int num) {
//        string res;
//        for (const auto& [value, symbol] : valueSymbols) {
//            while (num >= value) {
//                num -= value;
//                res += symbol;
//            }
//            if (num == 0) {
//                break;
//            }
//        }
//        return res;
//    }
//};
//
//
//int main() {
//    Solution s;
//    cout << s.intToRoman(3) << endl; // MIII
//    cout << s.intToRoman(4) << endl; // IV
//    cout << s.intToRoman(9) << endl; // IX
//    cout << s.intToRoman(58) << endl; // LVIII
//    cout << s.intToRoman(1994) << endl; // MCMXCIV      
//    return 0;
//}