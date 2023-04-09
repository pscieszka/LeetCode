class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
        int m = matrix.size();
        if(m==0) return false;
        int n = matrix[0].size();
     
        int low=0;
        int high=m-1;

        int mid;

        while (low<=high){ 
            mid = low + (high - low)/2;
            if(matrix[mid][0]<=target && matrix[mid][n-1]>=target)
            {
                break;
            }
            else if (matrix[mid][0]>target)
            {
                high = mid-1;
            }
            else if(matrix[mid][0]<target)
            {
                low = mid+1;
            }
        }
        int l = 0;
        int h = n-1;

        int mid2;
        while(l<=h)
        {
            mid2 = l + (h-l)/2;
            if(matrix[mid][mid2]==target)
            {
                return true;
            }
            else if(matrix[mid][mid2]<target)
            {
                l = mid2+1;
            }
            else if (matrix[mid][mid2]>target)
            {
                h=mid2-1;
            }
        }

       return false;
    }
};
