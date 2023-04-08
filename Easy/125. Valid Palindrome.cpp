// two pointers
class Solution {
public:

    bool alphaNum(char c){
        // Helper function to check if a character is alphanumeric
        // You can use isalnum function instead, like in second approach
        return ('A'<= c && c <= 'Z' || 'a'<= c && c <= 'z' || '0'<= c && c <= '9');
    }

    bool isPalindrome(string s) {
        int l=0, r=s.length()-1;
        while (l < r){

            while ( l < r && !alphaNum(s[l]))
                // Skip over non-alphanumeric characters from left
                l++;

            while ( l < r && !alphaNum(s[r]))
                // Skip over non-alphanumeric characters from right
                r--;

            if(tolower(s[l])!=tolower(s[r]))
                // If characters are not equal, return false
                return false;
            l++;
            r--;
        }
        // If all characters are equal, return true
        return true;
    }
};
// reversing
class Solution {
public:
    bool isPalindrome(string s) {
        string newS="";
        for(int i=s.length()-1; i>=0; i--){
            if(isalnum(s[i])){  // Check if a character is alphanumeric
                if(s[i]>=65 && s[i]<=90){
                    // Convert uppercase characters to lowercase
                    s[i]= tolower(s[i]);
                    newS+=s[i];
                }
                else newS+=s[i];
            }
        }
        string s2=newS;
        // Reverse the new string
        reverse(newS.begin(), newS.end());
        if(newS==s2) 
            // If the reversed string is equal to the original string, return true
            return true;
        else 
            // Otherwise, return false
            return false;
    }
};
