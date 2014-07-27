#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b) {
  return (a < b ? a : b);
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

struct binary_heap {
  vector<int> values;
  int first_free;

  binary_heap() {
    values.resize(1, -1);
    first_free = 1;
  }

  void insert(int v) {
    if (first_free >= values.size()) {
      values.resize(values.size()*2, -1);
    }

    values[first_free] = v;

    for (int i = first_free; values[i] < values[i/2] && i > 1; i /= 2) {
      swap (values[i], values[i/2]);
    }

    first_free++;
  }

  int minimum() {
    return values[1];
  }

  int extract_min() {
    swap (values[1], values[--first_free]);

    for (int i = 1; 2*i < first_free; ) {
      if (2*i+1 >= first_free && values[2*i] < values[i]) {
        swap(values[i], values[2*i]);
        i *= 2;
      } else if (values[i] > min(values[2*i], values[2*i+1])) {
        if (values[2*i] < values[2*i+1]) {
          swap(values[i], values[2*i]);
          i *= 2;
        } else {
          swap(values[i], values[2*i+1]);
          i = 2*i+1;
        }
      } else {
        break;
      }
    }

    return values[first_free];
  }

  void print() {
    for (int i = 1; i < values.size(); i++) {
      cout << values[i] << " ";
    }
    cout << endl;
  }

};

int main() {
  int n, a;
  binary_heap heap;
  cin >> n;


  for (int i = 0; i < n; i++) {
    cin >> a;
    heap.insert(a);
    heap.print();
  }

  for (int i = 0; i < n; i++) {
    cout << heap.extract_min() << ": ";
    heap.print();
  }

  return 0;
}
