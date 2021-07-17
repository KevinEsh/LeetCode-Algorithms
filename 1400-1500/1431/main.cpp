#include <vector>

using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int n = candies.size();
        int max_candies = 0;
        vector<bool> result;

        // calculate the maximum candies so far
        for (int i = 0; i < n; i++)
        {
            if (candies[i] > max_candies)
            {
                max_candies = candies[i];
            }
            candies[i] += extraCandies; //sum the extra right now
            result.push_back(true);
        }

        // compare with the before maximum candies
        for (int i = 0; i < n; i++)
        {
            if (candies[i] < max_candies)
            {
                result[i] = false;
            }
        }

        return result;
    }
};