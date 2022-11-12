class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
       int dist = INT_MAX ,dist2,ans=-1;
        for(int j=0; j<points.size();j++){
            if(x==points[j][0] || y==points[j][1]){
                dist2 = abs(x - points[j][0]) + abs(y - points[j][1]);
                if(dist2<dist){
                    dist = dist2;
                    ans = j;
                }
            }
        }
        return ans;
    }
};