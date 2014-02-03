#include <iostream>
using namespace std;

int sum(int *T, int n) {
  int result = 0;
  for (int i = 0; i < n; i++) {
    result += T[i];
  }

  return result;
}

int main() {
  int n, *T;

  cin >> n;
  T = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> T[i];
  }

  cout << sum(T, n) << endl;

  return 0;
}
