
class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0) return false;
        stack<char> x;
        for(int i=0; i<s.length();i++){
            char c = s[i];
            if(c=='(' || c=='{' || c=='[')
                x.push(c);
            else {
                if(x.empty()) return false;
                char top = x.top();
                x.pop();
                if(c==')' && top!='(' || c=='}' && top!='{' || c==']' && top!='[')
                    return false;
            }
        }
        return x.empty();
    }
};
