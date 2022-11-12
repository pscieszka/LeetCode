//passes 39/39

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        std::rotate(nums.begin(), nums.end()-k%nums.size(), nums.end());
        }
};



//passes 38/39 (time limit)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int x = k%nums.size();
        for(int i=0; i<x; i++){
            nums.insert(nums.begin(),nums.back());
            nums.pop_back();
        }
    }
};