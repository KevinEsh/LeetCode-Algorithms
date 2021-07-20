#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char, int> RomanTable = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}};

int romanToInt(string s)
{

    int sum = RomanTable[s.back()];
    for (int i = s.length() - 2; i >= 0; --i)
    {
        if (RomanTable[s[i]] < RomanTable[s[i + 1]])
        { // If prev number is greater, then it means it a combined number
            // reduce this diference from the prev
            sum -= RomanTable[s[i]];
        }
        else
        {
            // Otherwise keep summing up
            sum += RomanTable[s[i]];
        }
    }

    return sum;
}