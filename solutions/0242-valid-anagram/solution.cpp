class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> chars;
        for (int i=0; i<s.size(); i++) {
            chars[s[i]]++;
            chars[t[i]]--;
        }
        bool anagram = true;
        for (char x: t) {
            if (chars[x] != 0) {
                anagram = false;
            }
        }
        return anagram;
    }
};
