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

int main() {
  int n;
  cin >> n;

  cout << (naive_prime_check(n) ? "true" : "false") << endl;

  return 0;
}
