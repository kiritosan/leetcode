/*
 * @lc app=leetcode.cn id=704 lang=c
 *
 * [704] 二分查找
 *
 * https://leetcode-cn.com/problems/binary-search/description/
 *
 * algorithms
 * Easy (55.46%)
 * Likes:    457
 * Dislikes: 0
 * Total Accepted:    304.5K
 * Total Submissions: 549.6K
 * Testcase Example:  '[-1,0,3,5,9,12]\n9'
 *
 * 给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的
 * target，如果目标值存在返回下标，否则返回 -1。
 * 
 * 
 * 示例 1:
 * 
 * 输入: nums = [-1,0,3,5,9,12], target = 9
 * 输出: 4
 * 解释: 9 出现在 nums 中并且下标为 4
 * 
 * 
 * 示例 2:
 * 
 * 输入: nums = [-1,0,3,5,9,12], target = 2
 * 输出: -1
 * 解释: 2 不存在 nums 中因此返回 -1
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 你可以假设 nums 中的所有元素是不重复的。
 * n 将在 [1, 10000]之间。
 * nums 的每个元素都将在 [-9999, 9999]之间。
 * 
 * 
 */

// @lc code=start


int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;

    // 想象打轴时候左右分界的变化

    // 相等情况下还会循环 此时只剩一个值 如果此值是目标值则会返回目标索引
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }else if (nums[mid] < target)
        {
            // 目标在中点的右边，左边界收缩
            // mid不是目标值，所以不用再将mid放入寻找区间 从mid+1开始找
            left = mid + 1;
        }else if (nums[mid] > target)
        {
            // mid不是 目标值在左侧 右边界收缩到mid左边的mid-1
            right = mid - 1;
        }

    }
    return -1;
    

}
// @lc code=end

