class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> freq;
        for (int x: answers) {
            freq[x]++;
        }
        int min_rabbits = 0;
        for (auto& it: freq) {
            int ans = it.first;
            int f = it.second;
            min_rabbits += ((f + ans) / (ans + 1)) * (ans + 1);
        }
        return min_rabbits;
    }
};
