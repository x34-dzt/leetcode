#include <iostream>
using namespace std;

int is_armstrong(int value) {
  int duplicate_value = value;
  int sum = 0;
  while (duplicate_value != 0) {
    int last_digit = duplicate_value % 10;
    int last_digit_cube = (last_digit * last_digit * last_digit);
    sum += last_digit_cube;
    duplicate_value /= 10;
  }
  return sum;
}

int main() {
  int n = 153;
  int cube_sum = is_armstrong(153);
  if (n == cube_sum)
    std::cout << "It's an armtsrong number" << std::endl;
  else
    std::cout << "It's not an armtsrong number" << std::endl;
  return 0;
}
