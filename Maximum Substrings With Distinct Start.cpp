class Solution {
public:
    int maxDistinct(string s) {
        int count = 0;
        for(int i=0; i<s.length(); i++){
            bool seen = false;
        for(int j=0; j<i; j++){
            if(s[i] == s[j]){
                seen = true;
                break;
            }
        }
            if(!seen){
                count++;
            }
        }
        
        return count;
    }
};
