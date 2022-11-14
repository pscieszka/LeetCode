class Solution {
public:
    int numSquareSum(int n)
    {
    int squareSum = 0;
    while (n) {
        squareSum += (n % 10) * (n % 10);
        n /= 10;
    }
    return squareSum;
}

    bool isHappy(int n) {
    vector<int> x;
    while (1)
    {
        n = numSquareSum(n);
        if (n == 1)
            return true;
        if (find(x.begin(),x.end(), n) != x.end())
            return false;
        x.push_back(n);
    }
    }
};