#include <string>
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string final_str;
        int i=0, j=0;
        while (i<word1.length() || j<word2.length()) {
            if (i<word1.length()) {
                final_str.push_back(word1[i]);
                i++;
            }
            if (j<word2.length()) {
                final_str.push_back(word2[j]);
                j++;
            }
        }
        return final_str;
    }
};
