#include <string>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string s = ""; // solution empty string

        // read 'a' & 'b' from end to start (like normal bit sum)
        // c represet the sum and the carry at the same time
        int c = 0, i = a.size() - 1, j = b.size() - 1;

        // while 'a' & 'b' are not read at all or there is a carry
        while (i >= 0 || j >= 0 || c == 1)
        {
            // map '1' or '0' to int and sum up to 'c'
            // reduce i & j. If i < j or j < i fill gap with zeros
            c += i >= 0 ? a[i--] - '0' : 0;
            c += j >= 0 ? b[j--] - '0' : 0;
            // remap to char and concatenate to solution
            s = char(c % 2 + '0') + s;
            // calculate carry
            c /= 2;
        }

        return s;
    }
};