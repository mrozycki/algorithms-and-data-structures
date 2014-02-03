#include <iostream>
using namespace std;

int power(int n, int k) {
  int result = 1;
  for (int i = 0; i < k; i++) {
    result *= n;
  }

  return result;
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << power(n,k) << endl;

  return 0;
}
