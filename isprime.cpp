#include <iostream>
using namespace std;

class Solution {
public:
  bool is_prime(int n) {
    int cnt = 0;
    for (int i = 1; i * i < n; i++) {
      if (n % i == 0) {
        cnt++;
        if (n / 1 != i)
          cnt++;
      }
    }
    if (cnt == 2)
      return true;
    return false;
  }
};

int main() {
  Solution s;
  std::cout << s.is_prime(14) << std::endl;
}
