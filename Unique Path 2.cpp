class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();


   int dp[n][m];


        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
if(grid[i][j]==1) dp[i][j]=0;

else if(i==0 and j==0) dp[i][j]=1;
else{

    int left=0,up=0;
    if(i>0 ) left=dp[i-1][j];
    if(j>0) up=dp[i][j-1];

    dp[i][j]=left+up;
}

            }
        }
return dp[n-1][m-1];
    }
};