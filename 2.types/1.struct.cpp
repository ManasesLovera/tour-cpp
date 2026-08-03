#include <iostream>

struct Vector {
  int sz;       // number of elements
  double *elem; // pointer to elements
};

void vector_init(Vector &v, int s) {
  v.elem = new double[s];
  v.sz = s;
}

double read_and_sum(int s) {
  Vector v;
  vector_init(v, s);
  for (int i = 0; i != s; ++i) {
    std::cin >> v.elem[i];
  }

  return 3.2;
}

int main() {

  Vector v;

  return 0;
}