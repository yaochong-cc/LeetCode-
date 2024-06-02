// class Solution {
// public:
//     int distributeCandies(vector<int>& candyType) {
//         int n = candyType.size();
//         vector<int> res(200001, 0); // 根据题目给出的最大值，一般做法是开辟一个足够大的数组
//         for(int type : candyType){
//             res[type + 100000]++; // 这里偏移量加上 100000 是为了索引不为负数
//         }
        
//         int count = 0;
//         for(int num : res){
//             if(num > 0){
//                 count++;
//             }
//         }
        
//         return min(count, n/2);
//     }
// };


// class Solution {
// public:
//     int distributeCandies(vector<int>& candyType) {
//         unordered_set<int> types;
//         for (int type : candyType) {
//             types.insert(type);
//         }
//         return min(types.size(), candyType.size() / 2);
//     }
// };

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s(candyType.begin(), candyType.end());//在这种情况下，candyType中的元素将被复制到无序集合s中，重复的元素将被自动去重。
        return min(s.size(), candyType.size() / 2);
    }
};
