94. Binary Tree Inorder Traversal
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer>res=new ArrayList(); 
        dfs(res,root); 
        return res; 
        
    }
    void dfs(List<Integer> res, TreeNode node){
        if(node!=null){
            if(node.left!=null){
                dfs(res,node.left); 
            }
            res.add(node.val);
            if(node.right!=null){
                dfs(res,node.right); 
            }
        }

    }
}
