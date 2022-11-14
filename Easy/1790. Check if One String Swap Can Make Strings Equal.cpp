class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        string temp1 = s1, temp2 = s2;
        if(s1==s2){
            return true;
        }
        for(int i=0; i<s1.size();i++){
             for(int j=s1.size()-1; j>1 ;j--){
                swap(s1[i],s1[j]);
                if(s1==s2){
                    return true;
                }
                else {
                    s1 = temp1;
                    s2 = temp2;
                }
             }
            
        }
        for(int i=0; i<s2.size();i++){
             for(int j=s1.size()-1; j>1 ;j--){
               swap(s2[i],s2[j]);
                if(s1==s2){
                    return true;
                }
                else {
                    s1 = temp1;
                    s2 = temp2;
                }
             }
            
        }
     return false;   
    }
};