// Link- https://leetcode.com/problems/unique-binary-search-trees-ii/


class Solution {
public:

  vector<TreeNode*>Build(int st, int ed){
      if(st>ed) return {NULL};
       vector<TreeNode*>ans;
       if(st==ed) return {new TreeNode(st)};
      for(int i=st; i<=ed; i++){
           vector<TreeNode*>left=Build(st,i-1); // left ka tree build ho gaya 
            vector<TreeNode*>right=Build(i+1, ed);  // right ka tree build ho gya
      for(TreeNode* l : left){
                for(TreeNode* r : right){
                    TreeNode* root=new TreeNode(i);
                    root->left=l;
                    root->right=r;
                    
                    ans.push_back(root);
                }
            }
        }

      return ans;
  }