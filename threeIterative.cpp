#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

int main(){
    int n,factorial=1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        factorial*=i;
    }
    
    cout << "Factorial of " << n << " = " << factorial;
    


return 0;
}