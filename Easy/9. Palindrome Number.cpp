class Solution {
    public:
        bool isPalindrome(int x){
            int flag;
            double rev;
            int* p = &x;
            int y = *p;
            while(x>0)
            {
                flag = x % 10;
                rev = rev*10 + flag;
                x = x/10;
            }
            if(y==rev)
            {
                return true;
            }
            else
                return false;
        }
};