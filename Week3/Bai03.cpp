#include <iostream>
using namespace std;
int main () {
    const int MAX_N = 1000;
    int n;
    cin >> n;
    int a[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << a[0] << " ";
    for (int j = 1; j < n; j++) {
        if (a[j] != a[j-1]) {
            cout << a[j] << " ";
        }
    }
}