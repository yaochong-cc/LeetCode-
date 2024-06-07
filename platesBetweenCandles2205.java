public class platesBetweenCandles2205 {

    public static void main(String[] args) {
        Solution sol=new Solution();
        String s="**|**|*|";
        int[][] queries={{2,5},{5,9}};
        int[] ans=sol.platesBetweenCandles(s,queries);
        for(int i=0;i<ans.length;i++){
            System.out.println(ans[i]);
        }
    }
}
class Solution{
    public int [] platesBetweenCandles(String s,int[][]queries){
        int n=s.length();
        int []preSum =new int[n];
        for(int i=0,sum=0;i<n;i++){
            if(s.charAt(i)=='*'){
                sum++;
            }
            preSum[i]=sum;
        }
        int []left=new int[n];
        int []right=new int[n];
        for(int i=0,l=-1;i<n;i++){
            if(s.charAt(i)=='|'){
                l=i;
            }
            left[i]=l;
        }
        for(int i=n-1,r=-1;i>=0;i--){
            if(s.charAt(i)=='|'){
                r=i;
            }
            right[i]=r;
        }
        int[] ans=new int[queries.length];
        for(int i=0;i<queries.length;i++){
            int []query=queries[i];
            int x=right[query[0]],y=left[query[1]];//x,y可能越界？
            ans[i]=x==-1||y==-1||x>y?0:preSum[y]-preSum[x];
        }
        return ans;
    }
}