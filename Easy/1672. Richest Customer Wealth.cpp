class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,sum2=0;
        
        for(int i=0;i<accounts.size();i++){
            if(sum>sum2){
                sum2=sum;
                } 
                sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            if(accounts.size()==1){
                return sum;
            }
           
        }
        return sum2;
    }
};