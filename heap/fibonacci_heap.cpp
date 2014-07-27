#include <iostream>
using namespace std;

class FibonacciLink {
  private:
    int value;
    FibonacciLink *next;
    FibonacciLink *prev;
    FibonacciLink *parent;
    FibonacciLink *child;
    int degree;

  public:
    FibonacciLink(int value) {
      this->value = value;
      this->parent = this;
      this->next = this;
      this->prev = this;
      this->child = NULL;
      this->degree = 0;
    }

    virtual ~FibonacciLink() { }

    void insert(FibonacciLink *link) {
      link->next = this;
      link->prev = this->prev;
      this->prev->next = link;
      this->prev = link;
    }

    FibonacciLink* consolidate(FibonacciLink *link) {
      if (this->value < link-> value) {
	this->insert(link);
	return this;
      } else {
	link->insert(this);
	return link;
      }
    }

    int getValue() {
      return this->value;
    }
};

class FibonacciHeap {
  private:
    FibonacciLink *min;

  public:
    FibonacciHeap() { }
    virtual ~FibonacciHeap() { }

    void insert(int v) {
      FibonacciLink *link = new FibonacciLink(v);
      min->insert(link);

      if (v < min->getValue()) {
	min = link;
      }
    }

    int minimum() {
      return min->getValue();
    }
};

int main() {
  FibonacciHeap heap;
  int n, a;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    heap.insert(a);
    heap.print();
  }
}
