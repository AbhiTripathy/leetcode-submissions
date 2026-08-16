class Solution {
public:
    string trimEnds(int x, int y, string &s)
    {
        size_t n = y - x + 1;
        return s.substr(x + 1, n - 2);
    }
    string removeOuterParentheses(string s) {
        int depth = 0;
        string final = "";
        int x = 0, y = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
            depth++;
            }
            else
            {
            depth--;
            }
            y++;
            if (depth==0)
            {
            final.append(trimEnds(x, y, s));
            x = i + 1;
            }
        }
        return final;
    }
};
