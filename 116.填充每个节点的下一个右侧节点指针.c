/*
 * @lc app=leetcode.cn id=116 lang=c
 *
 * [116] 填充每个节点的下一个右侧节点指�?
 *
 * https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node/description/
 *
 * algorithms
 * Medium (70.47%)
 * Likes:    574
 * Dislikes: 0
 * Total Accepted:    163.6K
 * Total Submissions: 232.2K
 * Testcase Example:  '[1,2,3,4,5,6,7]'
 *
 * 给定一个 完美二叉树 ，其所有叶子节点都在同一层，每个父节点都有两个子节点。二叉树定义如下�?
 * 
 * 
 * struct Node {
 * �? int val;
 * �? Node *left;
 * �? Node *right;
 * �? Node *next;
 * }
 * 
 * 填充它的每个 next 指针，让这个指针指向其下一个右侧节点。如果找不到下一个右侧节点，则将 next 指针设置�? NULL�?
 * 
 * 初始状态下，所有 next 指针都被设置�? NULL�?
 * 
 * 
 * 
 * 进阶�?
 * 
 * 
 * 你只能使用常量级额外空间�?
 * 使用递归解题也符合要求，本题中递归程序占用的栈空间不算做额外的空间复杂度�?
 * 
 * 
 * 
 * 
 * 示例�?
 * 
 * 
 * 
 * 
 * 输入：root = [1,2,3,4,5,6,7]
 * 输出：[1,#,2,3,#,4,5,6,7,#]
 * 解释：给定二叉树如图 A 所示，你的函数应该填充它的每个 next 指针，以指向其下一个右侧节点，如图 B
 * 所示。序列化的输出按层序遍历排列，同一层节点由 next 指针连接�?'#' 标志着每一层的结束�?
 * 
 * 
 * 
 * 
 * 提示�?
 * 
 * 
 * 树中节点的数量少于�?4096
 * -1000 
 * 
 * 
 */

// @lc code=start
/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *left;
 *     struct Node *right;
 *     struct Node *next;
 * };
 */
void connectTwoNode(struct Node *node1,struct Node *node2){
    if (!node1||!node2)
    {
        return;
    }
    // ���������ڵ�
    node1->next = node2;
    // ���������ڵ���ӽڵ�
    connectTwoNode(node1->left,node1->right);
    connectTwoNode(node2->left,node2->right);
    // ������ͬ��������
    connectTwoNode(node1->right,node2->left);


}


struct Node* connect(struct Node* root) {
	if (!root)
    {
        return NULL;
    }
    
    connectTwoNode(root->left,root->right);
    return root;
}
// @lc code=end

