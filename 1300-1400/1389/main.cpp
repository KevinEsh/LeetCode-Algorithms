#include <vector>
using namespace std;

void insert_element(vector<int> &array, int &p, int &v)
{
    int q = array.size() - 1;
    while (q--)
    {
        array[q + 1] = array[q];
        if (q == p)
        {
            array[q] = v;
            break;
        }
    }
}

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> target;

        for (int i = 0; i < nums.size(); i++)
        {
            target.push_back(0);
            if (index[i] == i)
            {
                target[i] = nums[index[i]];
            }
            else
            {
                insert_element(target, index[i], nums[i]);
            }
        }

        return target;
    }
};