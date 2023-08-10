// Link-  https://leetcode.com/problems/letter-combinations-of-a-phone-number/


class Solution {
public:
void solve(int ind,string digit,vector<string>&ans,string temp,unordered_map<int,string>&mp)

{

    if(ind==digit.size()){
        ans.push_back(temp);
        return ;
    }
          string op=mp[digit[ind]-48];

          for(auto ch:op){
              temp.push_back(ch);
              solve(ind+1,digit,ans,temp,mp);
              temp.pop_back();
          }

}
    vector<string> letterCombinations(string digits) {
        vector<string>ans;

        if(digits.size()==0){
            return ans;
        }
       string temp="";
        unordered_map<int,string>mp={{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};

solve(0,digits,ans,temp,mp);

return ans;

    }
};