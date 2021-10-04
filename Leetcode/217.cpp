#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> num2;
        for(int i=0; i<nums.size();i++){
            if (num2.count(nums[i])){
                return true;
            }else{
                num2.insert(nums[i]);
            }
        }
        return false;
    }
};
