class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> rep;
        int l = 0;
        int ans=0;
        for(int i=0; i<s.length(); i++){
            bool in = rep.find(s[i]) != rep.end();
            while (in){
                rep.erase(s[l]);
                l+=1;
                in = rep.find(s[i]) != rep.end();
            }
            rep.insert(s[i]);
            ans = max(ans, i-l+1);

        }
        return ans;
        
    }
};
