class Solution {
public:
    int numOfWays(int n) {
        const int MOD = 1e9 + 7;
        
        long long abc = 6;  
        long long aba = 6;  
        
        for(int i = 2; i <= n; i++) {
            long long new_abc = (abc * 2 + aba * 2) % MOD;
            long long new_aba = (abc * 2 + aba * 3) % MOD;
            
            abc = new_abc;
            aba = new_aba;
        }
        
        return (abc + aba) % MOD;
    }
};
