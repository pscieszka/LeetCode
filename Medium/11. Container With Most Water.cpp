class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int max=0,current=0;
        while(l<r){
            current=min(height[l],height[r])*(r-l);
            if(height[l]>height[r]){
                r--;
                if(current>max){
                    max=current;
                }
            }
            else{
                l++;
                if(current>max){
                    max=current;
                }
            }
        }
        return max;
    }
};
