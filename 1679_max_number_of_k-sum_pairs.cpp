class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int operations = 0;

        for (int num : nums) {
            if (freq[k - num] > 0) {
                operations++;
                freq[k - num]--;
            } else {
                freq[num]++;
            }
        }
        return operations;
    }
};
