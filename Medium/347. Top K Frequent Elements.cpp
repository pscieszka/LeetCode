class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int arraySize = nums.size();
        vector<int> result;
        map<int,int> count;

        vector<vector<int>> buckets(arraySize + 1);

        for(int i=0;i<arraySize;i++){
            count[nums[i]]++;
        }

        for (auto& entry : count) {
            buckets[entry.second].push_back(entry.first);
        }

        for(int i=buckets.size()-1; i>=0; i--){
            if(!buckets[i].empty()){
                for (int j = 0; j < buckets[i].size() && k > 0; j++) {
                    result.push_back(buckets[i][j]);
                    k--;
                }
            }   
        }
        
        return result;     
    }

};
