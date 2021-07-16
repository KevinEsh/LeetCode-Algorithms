#include <vector>

class Solution
{
public:
    int removeElement(std::vector<int> &nums, int val)
    {
        int size = nums.size();
        int removed = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                nums[i] = 51;
                removed++;
            }
        }
        std::sort(nums.begin(), nums.end());
        return size - removed;
    }
};