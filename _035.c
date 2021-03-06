
//  给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置
int searchInsert(int* nums, int numsSize, int target)
{
    int low = 0;
    int high = numsSize - 1;

    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (target < nums[mid])
        {
            high = mid - 1;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return low;
}