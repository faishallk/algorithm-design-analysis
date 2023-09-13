#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

int main(){
    cout << "Bilangan prima sampai 100:" << endl;
    int num=100,sum=0;
    for (int i = 1; i < num; i++){
        bool isPrime = true;
        for (int j = 2; j <= i/2; j++){
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << i <<", ";
            sum+=i;
        }
    }
    cout <<endl<<"Jumlah bilangan prima sampai 100 adalah " << sum;

return 0;
}