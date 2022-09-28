class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> x = {nums[0]};
        
        for(int i=1;i<nums.size();i++)
        {
            x.push_back(x[i-1]+ nums[i]);
        }
        return x;
        
    }
};