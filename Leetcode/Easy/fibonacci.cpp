class Solution {
public:
    int fib(int N) {
        // iterative solution
        if (N < 2) return N;
        int f0 = 0, f1 = 1, f2;
        for (int i = 2; i <= N; i++) {
            f2 = f1 + f0;
            f0 = f1;
            f1 = f2;
        }
        return f2;
    }
};