#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i+1;
    
    return -1;
}
 
int main()
{
    int arr[] = { 121, 342, 103, 64, 405 };

    // untuk cari banyak elemen array
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int key;
    cin >> key;
   
    // panggil fungsi
    int position = findElement(arr, n, key);
    cout << "posisi ke-"<< position;
 
    return 0;
}