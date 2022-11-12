class Solution {
public:
    vector<int> sum(vector<int>& nums){
       
        if(nums.size()%2==1){
            for(int i= 0; i<nums.size(); i++){
                nums[i] = nums[i]%10;
                nums[i+1] = nums[i+1]%10;
                nums[i]+=nums[i+1];
            } 
       }
       else{
            for(int i= 0; i<nums.size()-1; i++){
                nums[i] = nums[i]%10;
                nums[i+1] = nums[i+1]%10;
                nums[i]+=nums[i+1];  
             }   
       }
       nums.pop_back();
       return nums;
    }
    int triangularSum(vector<int>& nums) {
        for(int i=nums.size()-1; i>0;i--){
            sum(nums);
        }  

      return nums[0]%10;
    }
};