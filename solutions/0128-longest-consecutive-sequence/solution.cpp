class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set;
        for (int x: nums) {
            nums_set.insert(x);
        }
        int max_length = 0;
        for (int num: nums_set) {
            if (!nums_set.count(num-1)) {
            int start=num, end=num;
            while (true) {
                if (nums_set.count(end+1)) {
                    end++;
                } 
                else break;
            }
            max_length = max(max_length, end-start+1);
            }
        }
        return max_length;
    }
};
