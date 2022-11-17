class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum=0;
        
        for(int i=0; i<n;i++){
            sum+=mat[i][i];
            cout<<sum<<endl;
        }
        for(int i=n-1, j=0; i>=0, j<n; i--,j++){
           sum+=mat[j][i];
           cout<<sum<<endl;
        }
        
        
        if(n%2==1){sum = sum - mat[(n/2)][(n/2)];} 
        return sum;
    }
};