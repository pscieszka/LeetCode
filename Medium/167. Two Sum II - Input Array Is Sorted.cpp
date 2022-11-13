class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> ans;
       int low=0;
       int high=nums.size()-1;
       while(low<high){
           if(nums[low]+nums[high]==target){
               break;
           }
           else if(nums[low]+nums[high]<target){
               low++;
           }
           else{
               high--;
           }
       }
        ans.push_back(low+1);
        ans.push_back(high+1);
        return ans;
    }
};