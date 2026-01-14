#include <iostream>
using namespace std;

void print(int value, int *counter) {
  if (value == 0) {
    return;
  }
  int count;
  if (counter == NULL) {
    count = 1;
  } else {
    count = *counter + 1;
  }
  std::cout << count << " ";
  return print(value - 1, &count);
}

int main() {
  print(10, NULL);
  return 0;
}
