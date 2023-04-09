class Solution {
public:
    int trap(vector<int>& height) {
      vector<int> maxLeft;
      vector<int> maxRight;
      int n = height.size();

      maxLeft.push_back(0);
      int max=0;
      for(int i=0; i<n; i++){
          int current=height[i];
          if(current>max){
              maxLeft.push_back(current);
              max = current;
          }
          else{
              maxLeft.push_back(max);
          }
      }

      max=0;
      
      for(int i=n-1; i>0; i--){
          int current=height[i];
          if(current>max){
              maxRight.push_back(current);
              max = current;
          }
          else{
              maxRight.push_back(max);
          }
      }
      maxRight.push_back(max);
      reverse(maxRight.begin(), maxRight.end());
      int sum = 0;
      for(int i=0; i<n; i++){
          
          int val = min(maxLeft[i], maxRight[i]) - height[i];
          if(val>0) sum+=val;
      }
    return sum;
    }
};
//second approach
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0)    return 0;
        int l = 0; 
        int r = n-1;
        int maxL = height[0]; 
        int maxR = height[n-1]; 
        int sum = 0; 
        
        while (l<r){
            if(height[l]<=height[r]){ 
                l++; 
                maxL = max(maxL, height[l]); 
                sum += maxL - height[l]; 
            }
            else{ 
                r--; 
                maxR = max(maxR, height[r]); 
                sum += maxR - height[r]; 
            }
        }
        return sum; 
    }
};
