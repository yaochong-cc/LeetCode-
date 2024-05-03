import java.util.Arrays;

class Solution {
    public double average(int[] salary) {
        // 对数组进行排序
        Arrays.sort(salary);
        
        double sum = 0;
        // 从第二个元素到倒数第二个元素求和
        for (int i = 1; i < salary.length - 1; i++) {
            sum += salary[i];
        }
        
        // 计算平均值，注意除以的是处理后的元素个数（总数减去两个极端值）
        return sum / (salary.length - 2);
    }
}


// class Solution {
// public:
//     double average(vector<int>& salary) {
//         sort(salary.begin(),salary.end());
//         double sum=0;
//         for(int i=1;i<salary.size()-1;i++){
//             sum+=salary[i];
//         }
//         return sum/(salary.size()-2);
//     } 
// };
