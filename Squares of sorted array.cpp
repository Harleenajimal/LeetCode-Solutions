class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans (nums.size());
        int i=0;
        int j = nums.size()-1;
        int k = nums.size()-1;
        while(i <= j){
            int leftnums = nums[i] * nums[i];
             int rightnums = nums[j] * nums[j];

            if(leftnums > rightnums ){
                ans[k] = leftnums;
                i++;
            }else{
                ans[k] = rightnums;
                j--;
            }
            k--;
        }
        return ans;
    }
};
