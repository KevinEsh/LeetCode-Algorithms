#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> greaters(size, 0);

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (nums[i] > nums[j])
                {
                    greaters[i]++;
                }
            }
        }

        return greaters;
    }
};