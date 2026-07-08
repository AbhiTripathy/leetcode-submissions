class Solution {
public:
    int reverse(int x) {
        int rev = 0;
  while (x) {
    long long temp = (long long)rev * 10 + x % 10;
    if (temp > INT_MAX || temp < INT_MIN)
      return 0;
    rev = rev*10 + x%10;
    x /= 10;
  }
  return rev;
    }
};
