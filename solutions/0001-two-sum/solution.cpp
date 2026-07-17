class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums_map;
        int n = nums.size();
        for (int i=0; i<n; i++) {
            int comp = target - nums[i];
            if (nums_map.find(comp) != nums_map.end()) {
                return {nums_map[comp], i};
            }
            nums_map[nums[i]] = i;
        }

        return {};
    }
};
