//Link- https://leetcode.com/problems/subsets-ii/

class Solution {
public:
     vector<vector<int>>ans;

     void solve(int ind, vector<int>&nums, vector<int>&tmp){
           ans.push_back(tmp);

           for(int i=ind; i<nums.size(); i++){
               if(i>ind and nums[i]==nums[i-1]) continue;

               tmp.push_back(nums[i]);
               solve(i+1,nums,tmp);
               tmp.pop_back();
           }

     }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;

   solve(0,nums,temp);

   return ans;
    }
};