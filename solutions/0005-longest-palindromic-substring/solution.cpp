class Solution {
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        int maxStart = 0, maxEnd = 0;
        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (j < n) {
                while (j < n && s[j] != s[i]) j++;
                if (j == n) break;
                bool palin = true;
                for (int k = i; k <= (i+j)/2; k++)
                {
                    if (s[k] != s[j - (k - i)])
                    {
                    palin = false;
                    break;
                    }
                }
                if (palin && j - i > maxEnd - maxStart)
                {
                    maxStart = i;
                    maxEnd = j;
                }
                j++;
            }
        }
        string longest_substring;
        for (int i = maxStart; i <= maxEnd; i++)
        {
            longest_substring += s[i];
        }
        return longest_substring;
    }
};
