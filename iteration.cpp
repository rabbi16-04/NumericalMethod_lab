#include <bits/stc++.h>

using namespace std;

const double tolerance = 0.001;

double compute(double x) {
  return (6*pow(x, 3.0) + exp(2*x) - 1) / 5;
}

int main() {
  double x = 1.0, root = 1.5, iter = 5.0, i = 1.0;

  while (true) {
    x = compute(x);
    
    if ((fabs(x - root)) < tolerance) {
      break;
    }
    
    cout << "Current value: " << x << endl;
    
    i++;
    root = x;
    
    if (i > iter) {
      cout << "Method failed\nFunction diverged\n";
      break;
    }
  }

  return 0;
}
