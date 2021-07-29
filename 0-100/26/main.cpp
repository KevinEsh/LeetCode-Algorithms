#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 1;
        map<int, int> uniques;

        for (int n : nums)
        {
            int i = uniques[n];
            if (!i)
            {
                uniques[n] = k;
                k++;
            }
        }

        for (auto it = uniques.begin(); it != uniques.end(); it++)
        {
            nums[it->second - 1] = it->first;
        }

        return k - 1;
    }
};