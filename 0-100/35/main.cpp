class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right = nums.size();
        int left = 0;

        while (left < right){
            int mid = (left + right) >> 1;
            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid;
        }
        
        return left;
    }
};
