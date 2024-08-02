class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++){
            if(i == 0){
                ans[i] = 0;
            }else{
                ans[i] = ans[i/2] + (i%2);
            }
        }
        return ans;
    }
};
