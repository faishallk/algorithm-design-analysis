#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}

int main() {
  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "Factorial of " << n << " = " << factorial(n);

  return 0;
}
