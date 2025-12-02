class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = nums[0];
        int min = nums[0];
        for(int i = 0; i<nums.size(); i++){
        
        
        if(nums[i] < min){
            nums[i] =  min;
        }if(nums[i]> max){
            nums[i] = max;
        }
        }
        while(max != 0){
            int rem = min%max;
            min = max;
            max = rem;
            if(max == 0){
                int res = min;
                return min;
            }
            
        }
        return{};
    }
};
