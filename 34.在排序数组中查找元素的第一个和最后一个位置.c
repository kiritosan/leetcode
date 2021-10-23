/*
 * @lc app=leetcode.cn id=34 lang=c
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 *
 * https://leetcode-cn.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
 *
 * algorithms
 * Medium (42.34%)
 * Likes:    1262
 * Dislikes: 0
 * Total Accepted:    356.8K
 * Total Submissions: 842.8K
 * Testcase Example:  '[5,7,7,8,8,10]\n8'
 *
 * 给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。
 * 
 * 如果数组中不存在目标值 target，返回 [-1, -1]。
 * 
 * 进阶：
 * 
 * 
 * 你可以设计并实现时间复杂度为 O(log n) 的算法解决此问题吗？
 * 
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：nums = [5,7,7,8,8,10], target = 8
 * 输出：[3,4]
 * 
 * 示例 2：
 * 
 * 
 * 输入：nums = [5,7,7,8,8,10], target = 6
 * 输出：[-1,-1]
 * 
 * 示例 3：
 * 
 * 
 * 输入：nums = [], target = 0
 * 输出：[-1,-1]
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 0 
 * -10^9 
 * nums 是一个非递减数组
 * -10^9 
 * 
 * 
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int left = 0;
    int right = numsSize - 1;
    int *inverval = malloc(sizeof(int) * 2);
    // 左边界
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
        {
            left = mid + 1;
        }else if (nums[mid] > target)
        {
            right = mid - 1;
        }else if (nums[mid] == target)
        {
            right = mid - 1;
        }
    }
    // left=right+1为结束条件 检查越界情况和返回索引指向的值和目标值是否一致
    // 当target在nums最小值和最大值之间而nums中没有值时，返回的索引不越界，但是指不到目标值
    if (left >= numsSize || nums[left] != target)
    {
        inverval[0] = -1;
    }else
    {
        inverval[0] = left;
    }
    
    // 重置搜索范围
    left = 0;
    right = numsSize - 1;
    // 右边界
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
        {
            left = mid + 1;
        }else if (nums[mid] > target)
        {
            right = mid - 1;
        }else if (nums[mid] == target)
        {
            // 找到目标值 寻找更右的目标值 左边收缩
            left = mid + 1;
        }
    }

    if (right < 0 || nums[right] != target)
    {
        inverval[1] = -1;
    }else
    {
        inverval[1] = right;
    }

    // 返回数组
    return inverval;
}
// @lc code=end

