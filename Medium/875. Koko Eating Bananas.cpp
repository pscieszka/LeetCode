class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int minimum=r;
        while (l<=r){
            int m = (r+l)/2;
            long hours = 0;
            
            for(int i=0; i<piles.size(); i++){
                double res = ceil(piles[i] / (double)m);
                hours+=(long)res;
            }
            
            if(hours<=h){
                minimum = min(minimum,m);
                r = m-1;
            }
            else{
                l = m+1;
            }    
        }
        return minimum;
    }
};
