#include <algorithm>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution
{
public:
    unordered_map<int, int> comp_map; //valores no fijados por defecto estan en cero
    vector<int> pair_solution;

    vector<int> twoSum(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            int comp = target - nums[i]; //numero complemento
            // Si el numero complemento ya fue encontrado antes, eso significa que
            // encontramos el par de numero que solucionan nuestro problema
            if (comp_map[comp])
            {
                int j = comp_map[comp] - 1;
                pair_solution.push_back(i); //indice del numero actual
                pair_solution.push_back(j); //remapeo del indice del complemento
                break;
            }
            //Guardamos el numero en question como llave y su indice+1 como valor
            comp_map[nums[i]] = i + 1;
        }
        return pair_solution;
    }
};

int main()
{
    vector<int> numbers = {2, 7, 11, 10, 4};
    int target = 9;

    Solution model;
    vector<int> solutions = model.twoSum(numbers, target);

    for (int num : solutions)
    {
        cout << "index: " << num << endl;
    }
}