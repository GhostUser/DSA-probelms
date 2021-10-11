class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_max=INT_MIN, max_end=0;
        for(int i=0; i<nums.size(); i++){
                max_end+=nums[i];
                if(current_max<max_end){
                    current_max=max_end;
                }
                if(max_end<0){
                    max_end=0;
                }
                max_end = max(max_end, 0);
            }
        return current_max;
        }
};