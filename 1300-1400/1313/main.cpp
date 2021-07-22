#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        int size = nums.size() >> 1;
        vector<int> decompressed;

        for (int i = 0; i < size; i++)
        {
            int freq = nums[2 * i];
            int value = nums[2 * i + 1];
            while (freq--)
            {
                decompressed.push_back(value);
            }
        }

        return decompressed;
    }
};