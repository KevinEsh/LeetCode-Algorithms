#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> array(encoded.size() + 1);
        array[0] = first;

        for (int i = 1; i < encoded.size() + 1; i++)
        { // XOR of a^a = 0 and a^b^a = a^a^b = 0^b = b
            array[i] = array[i - 1] ^ encoded[i - 1];
        }

        return array;
    }
};