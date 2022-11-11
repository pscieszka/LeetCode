class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size()-1;
        int mid=0;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                low= mid+1;
            }
            else if (nums[mid]>target)
            {
                high=mid-1;
            }
    }
    if(target>nums.back()){
    return nums.size();}
    if(target<0){
        return 0;
    }
    return low;
    }
};