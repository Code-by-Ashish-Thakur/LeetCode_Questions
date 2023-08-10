

// Link = https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tg) {
        int n=mat.size();
        int m=mat[0].size();


        
        int i=0,j=m-1;

        while(i<n and j>=0){
            if(mat[i][j]==tg) return true;

            if(mat[i][j]>tg){
                j--;
            }
            else{
                i++;
            }
        }
return false;
    }
};