
// link- https://leetcode.com/problems/count-complete-subarrays-in-an-array/

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
      int n=nums.size();
        map<int,int>mp;
    
      for(auto it:nums){
        mp[it]++;
       
      }
      
      int ct=0;
       for(int i=0; i<n; i++){
         map<int, int>mp2;
         for(int j=i; j<n; j++){
           mp2[nums[j]]++;
           
           if(mp2.size()==mp.size()) ct++;
         }
         
       }
      
      return ct;
    }
};