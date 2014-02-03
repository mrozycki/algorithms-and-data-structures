#include <iostream>
using namespace std;

bool naive_prime_check(int n) {
  int count = 0;

  for (int i = 1; i*i <= n; i++) {
    if (i*i == n) {
      count++;
    } else if (n%i == 0) {
      count += 2;
    }
  }
  
  return count == 2;
}

int naive_next_prime(int n) {
  for (int i = n+1; ; i++) {
    if (naive_prime_check(i)) {
      return i;
    }
  }
}

int main() {
  int n;
  cin >> n;

  for (int p = naive_next_prime(0); p < n; p = naive_next_prime(p)) {
    cout << p << " ";
  }
  cout << endl;

  return 0;
}
