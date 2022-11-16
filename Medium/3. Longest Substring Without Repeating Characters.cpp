class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans=0;
        for(int i=0; i<s.length();i++){
            vector<bool> seen(256);
            for(int j=i; j<s.length();j++){
            if (seen[s[j]] == true){
                break;
            }
            else {
                ans = max(ans, j - i + 1);
                seen[s[j]] = true;
            }
            }
            seen[s[i]] = false;
        }
        return ans;
    }
};