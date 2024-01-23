#include <iostream>
using namespace std;

int factorial (int n) {
  int factorial = 1;

  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  return factorial;
}

int main () {
  int n, r;
  cin >> n >> r;

  int fact_n = factorial(n);
  int fact_r = factorial(r);
  int fact_n_r = factorial(n - r);
  int ncr = fact_n / (fact_r * fact_n_r);
  cout << ncr << endl;

  /* int fact_n = 1;
  for (int i = 1; i <= n; i++) {
    fact_n *= i;
  }

  int fact_r = 1;
  for (int i = 1; i <= r; i++) {
    fact_r *= i;
  }

  int fact_n_r = 1;
  for (int i = 1; i <= n - r; i++) {
    fact_n_r *= i;
  }

  int ncr = fact_n / (fact_r * fact_n_r);
  cout << ncr << endl; */
}
