class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int x = nums.size();
        set<int> nums2;
        for(int i=0; i<x;i++){
            if(nums2.count(nums[i])) return true;
            nums2.insert(nums[i]);
        }
        // or check if nums.size()==nums2.size()

        return false;

    
    }
};
