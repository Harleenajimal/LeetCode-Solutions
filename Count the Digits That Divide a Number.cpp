class Solution {
public:
    int countDigits(int num) {
        int x = num;
        int count =0;
        while(x > 0){
            int extract = x%10;
            if(extract != 0 ){
                if(num % extract == 0){
                count++;
                }
            }
        x = x/10;
        }
        return count;
        
        

        return{};
    }
};
