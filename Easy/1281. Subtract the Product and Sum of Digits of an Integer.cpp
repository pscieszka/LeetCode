class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        while(n!=0)
        {
            int x = n%10;
            sum += x;
            product *= x;
            x=0;
            n = n/10;
        }
        return product - sum;
    }
};