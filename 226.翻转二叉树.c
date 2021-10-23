/*
 * @lc app=leetcode.cn id=226 lang=c
 *
 * [226] 翻转二叉�?
 *
 * https://leetcode-cn.com/problems/invert-binary-tree/description/
 *
 * algorithms
 * Easy (78.83%)
 * Likes:    1030
 * Dislikes: 0
 * Total Accepted:    313.3K
 * Total Submissions: 397.4K
 * Testcase Example:  '[4,2,7,1,3,6,9]'
 *
 * 翻转一棵二叉树�?
 * 
 * 示例�?
 * 
 * 输入�?
 * 
 * �?    4
 * �?  /   \
 * �? 2     7
 * �?/ \   / \
 * 1   3 6   9
 * 
 * 输出�?
 * 
 * �?    4
 * �?  /   \
 * �? 7     2
 * �?/ \   / \
 * 9   6 3   1
 * 
 * 备注:
 * 这个问题是受�? Max Howell �? 原问�? 启发�? �?
 * 
 * 谷歌：我�?90％的工程师使用您编写的软�?(Homebrew)，但是您却无法在面试时在白板上写出翻转二叉树这道题，这太糟糕了�?
 * 
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    // base case
    if (root == NULL)
    {
        return root;
    }

    // 交换两个子节点位置
    struct TreeNode *temp = invertTree(root->left);
    root->left = invertTree(root->right);
    root->right = temp;
    return root;
    
}
// @lc code=end

