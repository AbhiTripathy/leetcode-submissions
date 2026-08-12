class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj_size = n/3;
        unordered_map<int, int> freq_map;
        vector<int> maj_elements;
        for (int i = 0; i < n; i++)
        {
            freq_map[nums[i]]++;
            if (freq_map[nums[i]] == maj_size+1) maj_elements.push_back(nums[i]);
        }
        return maj_elements;
    }
};
