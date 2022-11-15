class Solution {
public:

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    int counter=0;
    int x;
    for(int i=0;i<nums1.size();i++){
        x=0;
        vector<int>::iterator it=find(nums2.begin(), nums2.end(), nums1[i]);
        x = distance(nums2.begin(), it);

        for(int j = x; j<nums2.size();j++){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums2[j]);
                break; 
            }
        }

        counter++;

        if(counter!=ans.size()){
            ans.push_back(-1);
        }
    }      
    
    return ans;
}
           
};