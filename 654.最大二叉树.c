/*
 * @lc app=leetcode.cn id=654 lang=c
 *
 * [654] 最大二叉树
 *
 * https://leetcode-cn.com/problems/maximum-binary-tree/description/
 *
 * algorithms
 * Medium (81.09%)
 * Likes:    335
 * Dislikes: 0
 * Total Accepted:    61K
 * Total Submissions: 75.2K
 * Testcase Example:  '[3,2,1,6,0,5]'
 *
 * 给定一个不含重复元素的整数数组 nums 。一个以此数组直接递归构建�? 最大二叉树 定义如下�?
 * 
 * 
 * 二叉树的根是数组 nums 中的最大元素�?
 * 左子树是通过数组�? 最大值左边部�? 递归构造出的最大二叉树�?
 * 右子树是通过数组�? 最大值右边部�? 递归构造出的最大二叉树�?
 * 
 * 
 * 返回有给定数�? nums 构建�? 最大二叉树 �?
 * 
 * 
 * 
 * 示例 1�?
 * 
 * 
 * 输入：nums = [3,2,1,6,0,5]
 * 输出：[6,3,5,null,2,0,null,null,1]
 * 解释：递归调用如下所示：
 * - [3,2,1,6,0,5] 中的最大值是 6 ，左边部分是 [3,2,1] ，右边部分是 [0,5] �?
 * �?   - [3,2,1] 中的最大值是 3 ，左边部分是 [] ，右边部分是 [2,1] �?
 * �?       - 空数组，无子节点�?
 * �?       - [2,1] 中的最大值是 2 ，左边部分是 [] ，右边部分是 [1] �?
 * �?           - 空数组，无子节点�?
 * �?           - 只有一个元素，所以子节点是一个值为 1 的节点�?
 * �?   - [0,5] 中的最大值是 5 ，左边部分是 [0] ，右边部分是 [] �?
 * �?       - 只有一个元素，所以子节点是一个值为 0 的节点�?
 * �?       - 空数组，无子节点�?
 * 
 * 
 * 示例 2�?
 * 
 * 
 * 输入：nums = [3,2,1]
 * 输出：[3,null,2,null,1]
 * 
 * 
 * 
 * 
 * 提示�?
 * 
 * 
 * 1 
 * 0 
 * nums 中的所有整�? 互不相同
 * 
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


struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize){

}
// @lc code=endd

