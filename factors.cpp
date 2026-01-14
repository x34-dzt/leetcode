#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> factors;
  int number = 64;

  // O(sqrt(n))
  for (int i = 1; i * i <= number; i++) {
    if (number % i == 0) {
      factors.push_back(i);
      if (i != number / i) {
        factors.push_back(number / i);
      }
    }
  }

  // O(log(n))
  sort(factors.begin(), factors.end());

  // O(n)
  for (auto i : factors)
    cout << i << " ";
}
