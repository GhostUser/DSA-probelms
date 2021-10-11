class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> unique;
        for(int i=0;i<nums1.size();i++){
                if(count(nums2.begin(),nums2.end(),nums1[i])){
                    if(count(unique.begin(),unique.end(),nums1[i])){
                }else{
                        unique.push_back(nums1[i]);
                    }        
            } 
        }
        return unique;
    }
};