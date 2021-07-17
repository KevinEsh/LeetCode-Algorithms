#include <vector>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int size = nums.size();
        int good_pairs = 0;

        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] == nums[j])
                    good_pairs++;
            }
        }

        return good_pairs;
    }
};