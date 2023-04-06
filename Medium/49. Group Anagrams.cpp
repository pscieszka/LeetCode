class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> anagrams;
        map<vector<int>,vector<string>> res;
        for(int i=0; i<strs.size();i++){
            vector<int> count(26,0);
            for(int j=0; j<strs[i].length(); j++){
            int charascii = strs[i][j] - 'a';
            count[charascii]++;

            }
             res[count].push_back(strs[i]);
    }
    vector<vector<string>> result;
    for (auto& entry : res) {
            result.push_back(entry.second);
        }
        return result;
    }
};
