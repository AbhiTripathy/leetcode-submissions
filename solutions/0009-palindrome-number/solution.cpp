class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        double original = x;
        double rev = 0;
        while (x) {
            double temp = x%10;
            rev = rev*10 + temp;
            x = x/10;
        }
        if (rev == original) return true;
        else return false;
    }
};
