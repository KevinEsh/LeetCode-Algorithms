#include <iostream>
#include <stack>
#include <string>
#include <map>

using namespace std;

map<char, char> parentMap = {
    {')', '('},
    {']', '['},
    {'}', '{'}};

class Solution
{
public:
    bool isValid(string &s)
    {
        // is size of string is odd, then by definition it can not be closed
        if (s.size() % 2 != 0)
            return false;

        stack<char> char_stack;

        for (char c : s)
        {

            if (parentMap.find(c) == parentMap.end())
            { // this ensure only lefty are appended
                char_stack.push(c);
            }
            else if (char_stack.size() == 0)
            { // special case when string 's' or sub string begin with ')' ']' or '}'
                return false;
            }
            else if (char_stack.top() == parentMap[c])
            { // char 'c' closes the top lefty
                char_stack.pop();
            }
            else
            { // char 'c' didn't close the top lefty that means is not valid string
                return false;
            }
        }
        return char_stack.size() ? false : true;
    }
};

int main()
{
    Solution model = Solution();
    string s = "()([{}]]";
    int b = model.isValid(s);
    std::cout << b << std::endl;
    return 0;
}