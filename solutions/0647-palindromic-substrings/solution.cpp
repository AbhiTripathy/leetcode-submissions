class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.size();
        for (int i=0; i<n; i++) {
            for (int j=i; j<n; j++) {
                bool palin = true;
                for (int k=i; k<=(j+i)/2; k++) {
                    if (s[k] != s[j-(k-i)]) {
                        palin = false;
                        break;
                    }
                }
                if (palin) count++;
            }
        }
        return count;
    }
};
