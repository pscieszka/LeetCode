class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int x;
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end()); // sort the array

        for(int i=0; i<nums.size(); i++){
            x=nums[i];
            if(i>0 && x==nums[i-1]) continue; // skip duplicate elements

            // find two elements whose sum is equal to -x, so sum + x = 0
            int low=i+1;
            int high=nums.size()-1;
            while(low<high){
                if(x+nums[low]+nums[high]>0){ // sum is greater than 0
                    high--;
                }
                else if(x+nums[low]+nums[high]<0){ // sum is smaller than 0
                    low++;
                }
                else{ // sum is equal to 0
                    vector<int> sum = {x,nums[low], nums[high]};
                    answer.emplace_back(sum);
                    low++;

                    // skip duplicate elements
                    while(nums[low]==nums[low-1] && low<high)   low++;    
                }
            }
        }
        return answer;
    }
};
