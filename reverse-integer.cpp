#include <climits>
#include <iostream>

class Solution {
public:
  bool will_overflow(long long int result, long long int digit) {
    if (result > INT_MAX / 10) {
      return true;
    }
    if (result < INT_MIN / 10) {
      return true;
    }

    if (result > INT_MAX / 10 && digit > 7) {
      return true;
    }
    if (result < INT_MIN / 10 && digit < 6) {
      return true;
    }
    return false;
  }

  long long int reverse(long long int x) {
    long long int result = 0;
    while (x != 0) {
      int last_digit = x % 10;
      x /= 10;

      if (will_overflow(result, last_digit)) {
        return 0;
      }
      result = (result * 10) + last_digit;
    }

    return result;
  }
};

int main() {
  Solution *sol1 = new Solution();
  long long int result = sol1->reverse(-9223372036854775805LL);
  std::cout << result << std::endl;
  delete sol1;
}
