class Solution {
public:
    string freqAlphabets(string s) {
        int x;
        string ans;
        for(int i=s.length()-1;i>=0; i--){
            if (s[i] == '#'){
                x=stoi(s.substr(i-2, 2));
                i-=2;
                }
            
            else{
                x = (s[i]-'0');
            }
            ans = char(96+x) + ans;
        }


            return ans;
        }
};