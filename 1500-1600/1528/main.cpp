#include <string>
#include <vector>

using namespace std;
class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string copy = s;
        for (int i = 0; i < indices.size(); i++)
        {
            copy[indices[i]] = s[i];
        }

        return copy;
    }
};