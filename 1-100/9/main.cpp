#include <iostream>

int reverse_int(int x)
{
    int rx = 0;
    while (x)
    {
        int digit = x % 10;   // retrive rightmost digit
        rx = rx * 10 + digit; //append the digit and move left
        x /= 10;              // remove the rightmost digit of x
    }
    return rx;
}

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        int right_digit, left_digit;
        int rx = reverse_int(x);
        std::cout << rx << std::endl;

        while (x)
        {
            right_digit = x % 10;
            left_digit = rx % 10;
            x /= 10;
            rx /= 10;

            if (right_digit != left_digit)
                return false;
        }

        return true;
    }
};

int main()
{
    Solution model;
    bool v = model.isPalindrome(1225221);
    std::cout << v << std::endl;
}