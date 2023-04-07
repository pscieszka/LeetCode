class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int x=1;
        ans.push_back(x);
        for(int i=0; i<nums.size(); i++){
            if(ans.size()==nums.size()){
                break;
            }
            x*=nums[i];
            ans.push_back(x);
        }
        x=1;
        for(int i=nums.size()-1; i>0; i--){
            x*=nums[i];
            ans[i-1]=ans[i-1]*x;
        }
        return ans;
    }
};
