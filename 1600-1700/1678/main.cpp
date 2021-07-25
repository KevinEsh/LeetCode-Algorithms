#include <string>
using namespace std;
class Solution
{
public:
    string interpret(string command)
    {
        string parser = "";
        for (int i = 0; i < command.size(); i++)
        {
            if (command[i] == '(')
            {
                if (command[i + 1] == ')')
                {
                    parser += "o";
                    i++;
                }
                else
                {
                    parser += "al";
                    i += 3;
                }
            }
            else
            {
                parser += command[i];
            }
        }
        return parser;
    }
};