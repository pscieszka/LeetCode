class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> mat2(r, vector<int>(c));
        int n = mat.size();
        if(n*mat[0].size()!=r*c){
            return mat;
        }
        for (int i=0; i<n*mat[0].size(); i++) {
            mat2[i / c][i % c] = mat[i / mat[0].size()][i % mat[0].size()];
        }
        return mat2;   
        }
};