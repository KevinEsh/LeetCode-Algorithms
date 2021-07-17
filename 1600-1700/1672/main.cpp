#include <vector>
using namespace std;
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int max_wealth = 0;
        for (vector<int> customer : accounts)
        {
            int total_wealth = 0;
            for (int bank_money : customer)
            {
                total_wealth += bank_money;
            }
            if (total_wealth > max_wealth)
            {
                max_wealth = total_wealth;
            }
        }
        return max_wealth;
    }
};