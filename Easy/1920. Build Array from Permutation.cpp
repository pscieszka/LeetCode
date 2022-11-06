class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> result;
        int x = nums.size();
        for(int i=0; i<x;i++)
        {
            int y=nums[nums[i]];
            result.push_back(y);
        }
        return result;
    }
    
};