class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> idx;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(idx.count(target-nums[i])){
                ans.push_back(i);
                ans.push_back(idx[target-nums[i]]);
                return ans;
                }
            else
                idx[nums[i]] = i;
        }
        return ans;
    }
};
