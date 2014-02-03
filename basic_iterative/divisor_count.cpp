#include <iostream>
using namespace std;

int divisor_count(int n) {
  int result = 0;

  for (int i = 1; i*i <= n; i++) {
    if (i*i == n) {
      result++;
    } else if (n%i == 0) {
      result += 2;
    }
  }
  
  return result;
}

int main() {
  int n;
  cin >> n;

  cout << divisor_count(n) << endl;

  return 0;
}
