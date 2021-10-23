/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode-cn.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (66.73%)
 * Likes:    1972
 * Dislikes: 0
 * Total Accepted:    735.1K
 * Total Submissions: 1.1M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个升序链表合并为一个新�? 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。�?
 * 
 * 
 * 
 * 示例 1�?
 * 
 * 
 * 输入：l1 = [1,2,4], l2 = [1,3,4]
 * 输出：[1,1,2,3,4,4]
 * 
 * 
 * 示例 2�?
 * 
 * 
 * 输入：l1 = [], l2 = []
 * 输出：[]
 * 
 * 
 * 示例 3�?
 * 
 * 
 * 输入：l1 = [], l2 = [0]
 * 输出：[0]
 * 
 * 
 * 
 * 
 * 提示�?
 * 
 * 
 * 两个链表的节点数目范围是 [0, 50]
 * -100 
 * l1 �? l2 均按 非递减顺序 排列
 * 
 * 
 */

// @lc code=start
/* *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    // base case
    if (!l1)
		return l2;
	if (!l2)
		return l1;

    // 找到小的节点摘出来，得到两条新的链表
    // merge两条新链表，单个节点指向merge()的链�?
	if (l1->val < l2->val){
		l1->next = mergeTwoLists(l1->next, l2);
		return l1;
	}else{
		l2->next = mergeTwoLists(l1, l2->next);
		return l2;
	}
    
    
}
// @lc code=end

