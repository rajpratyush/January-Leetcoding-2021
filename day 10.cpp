class Solution {
public:
    
    vector<int> arr;
    int high;
    
    void add(int x){
        while(x <= high){
            arr[x]++;
            x += x & (-x);
        }
    }
    int query(int x){
        if(x == 0)
            return x;
        int res = 0;
        while(x){
            res += arr[x];
            x -= x & (-x);
        }
        return res;
    }
    
    int createSortedArray(vector<int>& instructions) {
        high = 1e5;
        arr.resize(high+1);
        int N = instructions.size();
        int sum = 0;
        int mod = 1e9 + 7;
        for (int i=0; i<N; i++) {
            add(instructions[i]);
            int left = query(instructions[i]-1);
            int right = i + 1 - query(instructions[i]);
            sum = (sum + min(left, right) % mod) % mod;
        }
        return sum;
    }
};
