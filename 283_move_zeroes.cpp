class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0; // pointer for the position of the next non-zero element

        // move all non-zero elements to the beginning
        for(int i = 0; i < nums.size();i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[nonZeroIndex]);
                nonZeroIndex++;
            }
        }
    }
};
