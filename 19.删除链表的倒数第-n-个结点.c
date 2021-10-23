/*
 * @lc app=leetcode.cn id=19 lang=c
 *
 * [19] 删除链表的倒数第 N 个结点
 *
 * https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/description/
 *
 * algorithms
 * Medium (42.99%)
 * Likes:    1615
 * Dislikes: 0
 * Total Accepted:    535.8K
 * Total Submissions: 1.2M
 * Testcase Example:  '[1,2,3,4,5]\n2'
 *
 * 给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。
 * 
 * 进阶：你能尝试使用一趟扫描实现吗？
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：head = [1,2,3,4,5], n = 2
 * 输出：[1,2,3,5]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：head = [1], n = 1
 * 输出：[]
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：head = [1,2], n = 1
 * 输出：[1]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 链表中结点的数目为 sz
 * 1 
 * 0 
 * 1 
 * 
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *fast = head,*slow = head;

    //fast forward n steps
    // 循环n次 前进n步
    while (n-- > 0)
    {
        fast = fast->next;
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     fast = fast->next;
    // }
    // 超过链表长度的情况 返回第一个值 head是空节点,所以head->是第一个节点
    if (!fast)
    {
        return head->next;
    }
    
    // 同时循环快慢指针
    // 当fast的下一个有值就移动 最后移动到链表尾
    while(fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    // 跳过倒数第n个节点 就删除了倒数第n个节点
    slow->next = slow->next->next;
    return head;





}
// @lc code=end

