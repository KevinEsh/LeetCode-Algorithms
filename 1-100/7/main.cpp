
#include <string>
#include <iostream>
#include <algorithm>

#define lower -2147483648
#define upper 2147483647

class Solution
{
public:
    int reverse(int x)
    {

        std::string sx = x < 0 ? "-" : "";
        sx += std::to_string(abs(x));

        if (x < 0)
        {
            std::reverse(sx.begin() + 1, sx.end());
        }
        else
        {
            std::reverse(sx.begin(), sx.end());
        }

        long long lx = stol(sx);

        if (lower <= lx && lx <= upper)
        {
            return (int)lx;
        }
        return 0;
    }
};

int main()
{

    Solution model = Solution();
    int reversed = model.reverse(-124265343);
    std::cout << reversed << std::endl;
    return 0;
}