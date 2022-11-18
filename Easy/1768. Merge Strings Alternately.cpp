class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s3;
        int x = word1.length();
        int y = word2.length();
        if(x>y){
        for(int i=0; i<y; i++){
            s3.push_back(word1[i]);
            s3.push_back(word2[i]);
        }
         for(int i=y; i<x; i++){
            s3.push_back(word1[i]); 
        }
        }
        else{
        for(int i=0; i<x; i++){
            s3.push_back(word1[i]);
            s3.push_back(word2[i]);
        }
        for(int i=x; i<y; i++){
            s3.push_back(word2[i]); 
        }
        }    
    return s3; 
    }
   
};