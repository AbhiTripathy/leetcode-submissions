class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> nums_map;
        nums_map[0] = 1;
        int total = 0, prefix = 0;
        for (int i=0; i<nums.size(); i++) {
            prefix += nums[i];
            total += nums_map[prefix-k];
            nums_map[prefix]++;
        }
        return total;
    }
};
