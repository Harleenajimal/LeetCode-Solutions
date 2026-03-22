class Solution {
public:
    int secondHighest(string s) {
        int highest = -1;
        int sechighest = -1;
        for(int i=0; i<s.length(); i++){
            if(isdigit(s[i])){
                int num = s[i] - '0';
            
            if(num > highest){
                sechighest = highest;
                highest = num;
            }
            else if(num > sechighest && num != highest){
                sechighest = num;
            }
        }
        }  
        return sechighest;
    }
};
