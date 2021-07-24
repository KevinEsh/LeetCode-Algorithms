#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int key = (ruleKey == "type") ? 0 : (ruleKey == "color") ? 1
                                                                 : 2;
        return count_if(begin(items), end(items), [&](const auto &tuple)
                        { return tuple[key] == ruleValue; });
    }
};