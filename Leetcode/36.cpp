class Solution {
public:
    void sortColors(vector<int>& nums) {
    int i, cnt0=0, cnt1=0, cnt2=0;
    int n=nums.size();
    for(i=0; i<n; i++){
        if(nums[i]==0){
            cnt0++;
        }else if(nums[i]==1){
            cnt1++;
        }else if(nums[i]==2){
            cnt2++;
        }
    }
    i=0;
    while (cnt0!=0 || cnt1!=0 || cnt2!=0){
        if (cnt0!=0){
            nums[i++]=0;
            cnt0--;
        }else if(cnt1!=0){
            nums[i++]=1;
            cnt1--;
        }else if(cnt2!=0){
            nums[i++]=2;
            cnt2--;
            }
        }
    }
};