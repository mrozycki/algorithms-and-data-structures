#include <iostream>
using namespace std;

int maximum(int *T, int n) {
  int max = T[0];
  for (int i = 1; i < n; i++) {
    if (T[i] > max) {
      max = T[i];
    }
  }

  return max;
}

int maximum_index(int *T, int n) {
  int max_value = T[0];
  int max_index = 0;

  for (int i = 1; i < n; i++) {
    if (T[i] > max_value) {
      max_value = T[i];
      max_index = i;
    }
  }

  return max_index;
}

int main() {
  int n, *T;

  cin >> n;
  T = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> T[i];
  }

  cout << maximum(T, n) << endl;

  return 0;
}
