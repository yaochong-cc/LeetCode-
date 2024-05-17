////
//// Created by Lenovo on 2024/5/17.
////
//#include<iostream>
//#include<vector>
//#include <unordered_set>
//#include<string>
//
//using namespace std;
//class Solution {
//public:
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//        unordered_set<int> res_set;
//        unordered_set<int> nums_set(nums1.begin(),nums1.end());
//        for(int num:nums2){
////            nums_set.find(num): 这一部分使用find函数在nums_set中查找特定的元素num。
////            如果元素被找到，find函数返回指向该元素的迭代器；如果未找到，返回值等同于nums_set.end()。
//            if(nums_set.find(num)!=nums_set.end()){//找到了，就插入到res_set中
//                res_set.insert(num);
//            }
//        }
//        return vector<int>(res_set.begin(),res_set.end());
//    }
//};
//int main(){
//    Solution sol;
//    vector<int> nums1={1,2,2,1};
//    vector<int> nums2={2,2};
//    vector<int> res=sol.intersection(nums1,nums2);
//    for(int num:res){
//        cout<<num<<" ";
//    }
//    return 0;
//}
//
