#include <string>
using namespace std;

class Solution
{
public:
    int minPartitions(string n)
    {
        /**
         * Observe que cada numero se puede escribir como una suma de numeros
        deci-binarios observando la cantidad de 1's que se necesitan para completar
        cada uno de los digitos. Si esto 1's los acomodamos de una forma greedy
        resulta que el mayor digito es siempre igual a la minima cantidad de deci
        binarios. Por ejemplo:
        > 2445312 =
        + 1111111
        + 1111101
        + 0111100
        + 0111000
        + 0001000
        **/
        if (n == "0")
            return 1;

        int max_digit = 0;

        for (char digit : n)
        {
            int x = digit - '0';
            if (x > max_digit)
                max_digit = x;
        }

        return max_digit;
    }
};