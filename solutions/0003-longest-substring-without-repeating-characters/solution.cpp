class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sset;
        int longest = 0, i=0;
        for (int j=0; j<s.size(); j++) {
            if (sset.count(s[j])) {
                while (s[i]!=s[j]) {
                    sset.erase(s[i]);
                    i++;
                }
                i++;
                longest = max(longest, j - i + 1);
            }
            else {
                longest = max(longest, j - i + 1);
                sset.insert(s[j]);
            }
        }
        return longest;

    }
};
