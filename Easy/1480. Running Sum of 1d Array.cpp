#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
     int pivotIndex(vector<int>& nums) {
        int sum=0;
        int left=0;
        int right;
       for_each(nums.begin(), nums.end(), [&] (int n) {sum += n;});
        for (int i=0; i<nums.size();i++)
        {
            right = sum -nums[i] - left;
            if (left==right)
            {
                return i;
            }
               left+= nums[i];    
        }
        return -1;
    }
};
int main()
{
    Solution x;
    vector <int> v={1,2,3};
    cout<<x.pivotIndex(v);




    return 0;
}