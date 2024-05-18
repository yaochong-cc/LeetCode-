import java.io.*;

//机器人正在玩一个古老的基于DOS的游戏。
// 游戏中有N+1座建筑——从0到N编号，从左到右排列。
// 编号为0的建筑高度为0个单位，编号为i的建筑的高度为H(i)个单位。
//
// 起初， 机器人在编号为0的建筑处。
// 每一步，它跳到下一个（右边）建筑。
// 假设机器人在第k个建筑，且它现在的能量值是E,
// 下一步它将跳到第个k+1建筑。
// 它将会得到或者失去正比于与H(k+1)与E之差的能量。
// 如果 H(k+1) > E 那么机器人就失去 H(k+1) - E 的能量值，
// 否则它将得到 E - H(k+1) 的能量值。
//
//游戏目标是到达第个N建筑，在这个过程中，能量值不能为负数个单位。
// 现在的问题是机器人以多少能量值开始游戏，才可以保证成功完成游戏？
//
//二分答案法
public class Robort {
    public static int MAXN=100001;
    public static int[]arr =new int[MAXN];

    public static int n;

    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StreamTokenizer in =new StreamTokenizer(br);
        PrintWriter out =new PrintWriter(new OutputStreamWriter(System.out));
        while(in.nextToken()!=StreamTokenizer.TT_EOF){
            n=(int)in.nval;
            int l=0;
            int r=0;
            for(int i=1;i<=n;i++) {
                in.nextToken();
                arr[i] = (int)in.nval;
                r = Math.max(r, arr[i]);
            }
            out.print(compute(l,r,r));
        }
        out.flush();
        out.close();
        br.close();
    }
    public static int compute(int l,int r,int max) {
        int m,ans = -1;
        while (l <= r) {
            m = l + ((r - l)>>1);
            if (f(m, max)) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return ans;
    }

    public static boolean f(int energy,int max) {
        for (int i = 1; i <= n; i++) {
            if(energy<=arr[i]){
                energy -= arr[i] - energy;
            } else{
                energy += energy - arr[i];
            }
            if (energy >= max) {
                return true;
            }
            if (energy < 0) {
                return false;
            }
        }
        return true;
    }

}
