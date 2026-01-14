#include <climits>
#include <iostream>
using namespace std;

bool will_overflow(int result, int digit) {
  if (result > INT_MAX / 10) {
    return true;
  }
  if (result < INT_MIN / 10) {
    return true;
  }

  if (result == INT_MAX / 10 && digit > 7) {
    return true;
  }
  if (result == INT_MIN / 10 && digit < 6) {
    return true;
  }
  return false;
}

bool isPalindrome(int real_value) {
  if (real_value < 0) {
    return false;
  }

  int reversed_value = 0;
  int duplicate_value = real_value;

  while (duplicate_value != 0) {
    int last_digit = duplicate_value % 10;
    if (will_overflow(reversed_value, last_digit))
      return false;

    duplicate_value /= 10;
    reversed_value = (reversed_value * 10) + last_digit;
  }

  if (reversed_value == real_value)
    return true;

  return false;
}

int main() {
  int value = -121;
  if (isPalindrome(value)) {
    std::cout << "is a palidrome number" << std::endl;
  } else {
    std::cout << "is not a palidrome number" << std::endl;
  }
  return 0;
}
