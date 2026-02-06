class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;

        int i1 = 0, i2 = 0, i3 = 0;

        for (int i = 1; i < n; i++) {
            int a = dp[i1] * 2;
            int b = dp[i2] * 3;
            int c = dp[i3] * 5;

            dp[i] = min(a, min(b, c));

            if (dp[i] == a) i1++;
            if (dp[i] == b) i2++;
            if (dp[i] == c) i3++;
        }

        return dp[n - 1];
    }
};
