class Solution {
public:
    int minimumSum(int num) {
        int a, b, c, d;
        a=num%10;
        b=(num/10)%10;
        c=(num/100)%10;
        d=(num/1000)%10;
         if (a < b)
        swap(a, b);

        if (c < d)
        swap(c, d);

        if (a < c)
        swap(a, c);

        if (b < d)
        swap(b, d);

        if (b < c)
        swap(b, c);

        int new1 = c*10+d*10+a+b;
        
            return new1;

    }
    };
    