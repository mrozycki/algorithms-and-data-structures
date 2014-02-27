#include <iostream>
using namespace std;

int minimum(int *T, int n) {
  int min_index = 0;
  for (int i = 1; i < n; i++) {
    if (T[i] < T[min_index]) {
      min_index = i;
    }
  }

  return T[min_index];
}

int minimum_index(int *T, int n) {
  int min_index = 0;
  for (int i = 1; i < n; i++) {
    if (T[i] < T[min_index]) {
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
