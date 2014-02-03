#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> divisors(int n) {
  vector<int> result;
  stack<int> big;

  for (int i = 1; i*i <= n; i++) {
    if (i*i == n) {
      result.push_back(i);
    } else if (n%i == 0) {
      result.push_back(i);
      big.push(n/i);
    }
  }
  
  while ( ! big.empty()) {
    result.push_back(big.top());
    big.pop();
  }

  return result;
}

int main() {
  int n;
  cin >> n;

  vector<int> divs = divisors(n);
  for (int i = 0; i < divs.size(); i++) {
    cout << divs[i] << " ";
  }
  cout << endl;

  return 0;
}
