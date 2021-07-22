class Solution
{
public:
    int numberOfSteps(int num)
    {
        int steps = num ? -1 : 0;
        while (num)
        {
            steps += (num & 1) ? 2 : 1;
            num = num >> 1;
        }

        return steps;
    }
};