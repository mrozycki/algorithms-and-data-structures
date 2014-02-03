#include <iostream>
using namespace std;

int minimum(int *T, int n) {
  int min = T[0];
  for (int i = 1; i < n; i++) {
    if (T[i] < min) {
      min = T[i];
    }
  }

  return min;
}

int minimum_index(int *T, int n) {
  int min_value = T[0];
  int min_index = 0;

  for (int i = 1; i < n; i++) {
    if (T[i] < min_value) {
      min_value = T[i];
      min_index = i;
    }
  }

  return min_index;
}

int main() {
  int n, *T;

  cin >> n;
  T = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> T[i];
  }

  cout << minimum(T, n) << endl;

  return 0;
}
