class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evens = 0;
        for (int n: nums){
            int digits = 0;
            while (n){
                digits++;
                n /= 10;
            }
            evens += (digits % 2)? 0:1;
        }
        return evens;
    }
};
