class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj_size = n/2;
        unordered_map<int, int> freq_map;
        for (int i = 0; i < n; i++)
        {
            freq_map[nums[i]]++;
            if (freq_map[nums[i]] > maj_size) return nums[i];
        }
        return -1;
    }
};
