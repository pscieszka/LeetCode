class Solution {
public:
    string toLowerCase(string s) {
    int ascii=0;
    for (int i=0;i<s.length();i++)
    {   
        ascii =s[i];
        if(ascii<91 && ascii>64){
        ascii+=32;
        s[i] = ascii;
        }
    }
 return s;
    }
   
};