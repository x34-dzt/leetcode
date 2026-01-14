#include <iostream>
using namespace std;

int main() {
  int n1 = 52;
  int n2 = 10;

  while (n1 > 0 && n2 > 0) {
    if (n1 > n2) {
      n1 = n1 % n2;
    } else {
      n2 = n2 % n1;
    }

    if (n1 == 0) {
      std::cout << n2 << std::endl;
    } else if (n2 == 0) {
      std::cout << n1 << std::endl;
    }
  }
}
