class Solution {
public:
    bool isPalindrome(int x) {
        long long temp = x;
        long long rev = 0;
        if(x<0){
            return false;
        }
        while(x!=0){
            long long n = x%10;
            rev = rev*10+n;
            x = x/10;
        }
        return temp == rev;
    }
};
