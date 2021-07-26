#include <string>
using namespace std;

class Solution
{
public:
    string toLowerCase(string s)
    {
        for (char &c : s)
        {
            if (65 <= c && c <= 90)
                c += 32;
        }
        return s;
    }
};