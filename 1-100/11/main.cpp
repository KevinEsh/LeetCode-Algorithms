#include <vector>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &walls)
    { // Build the solution based on the first level of water, find the two walls
        // i & j more distants between each other, calcule the volumen as 1 * (j - i)
        // then go up to level two and repeat the same process, calculate volume
        // as 2 * (j - i) if this volume is greater than previous level,then update
        // repeat the same prosses till the max height (that happends when  i == j)
        int max_volume = 0;
        int left = 0, right = walls.size() - 1;
        int height = 1;

        while (left < right)
        {
            while (left < right && walls[left] < height)
            {
                left++;
            }
            while (left < right && walls[right] < height)
            {
                right--;
            }

            int volume = (right - left) * height;
            max_volume = max_volume < volume ? volume : max_volume;
            height++;
        }

        return max_volume;
    }
};