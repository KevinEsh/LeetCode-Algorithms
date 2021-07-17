#include <string>
#include <map>
using namespace std;

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        map<char, int> count_stones;
        int total_jewels = 0;

        //count all stones of each type
        for (char s : stones)
        {
            count_stones[s]++;
        }

        // sum up all the stones of type jewels
        for (char j : jewels)
        {
            total_jewels += count_stones[j];
        }

        return total_jewels;
    }
};