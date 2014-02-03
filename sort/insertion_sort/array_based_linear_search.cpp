#include <iostream>
using namespace std;

void insertion_sort(int *T, int n) {
  for (int i = 0; i < n; i++) {
    int j;
    for (j = 0; j < i && T[i] > T[j]; j++) { }

    int t = T[i];
    for (int k = i; k > j; k--) {
      T[k] = T[k-1];
    }
    T[j] = t;
  }
}

int main() {
  int *T, n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> T[i];
  }

  insertion_sort(T, n);

  for (int i = 0; i < n; i++) {
    cout << T[i] << " ";
  }

  return 0;
}
