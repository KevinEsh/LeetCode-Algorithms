#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int longest = strs[0].size();

        for (int i = 1; i < strs.size(); i++)
        {
            int j = 0;
            while (strs[0][j] == strs[i][j] && longest > j)
            {
                j++;
            }
            longest = j;
        }

        return strs[0].substr(0, longest);
    }
};