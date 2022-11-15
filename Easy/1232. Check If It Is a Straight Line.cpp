class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2){
            return true;
        }
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        int deltax =x2-x1;
        int deltay =y2-y1;
        for(int i=2 ; i<coordinates.size();i++){
            int x = coordinates[i][0] - coordinates[i-1][0];
            int y = coordinates[i][1] - coordinates[i-1][1];
            if(deltax*y != deltay*x){
                return false;
            }
        }
        return true;
        
        
        
    }
};