#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}

void selection_sort(int *T, int n) {
  for (int i = 0; i < n; i++) {
    int min = T[i];
    int min_index = i;

    for (int j = i+1; j < n; j++) {
      if (T[j] < min) {
	min = T[j];
	min_index = j;
      }
    }

    swap(T[min_index], T[i]);
  }
}

int main() {
  int *T, n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> T[i];
  }

  selection_sort(T, n);

  for (int i = 0; i < n; i++) {
    cout << T[i] << " ";
  }

  return 0;
}
