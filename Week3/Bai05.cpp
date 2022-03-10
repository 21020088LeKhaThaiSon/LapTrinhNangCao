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
    bool flag = true;
    for (int k = 0; k < n/2; k++) {
        if ( a[k] == a[n-1-k]) {
            flag = true;
        } else {
            flag = false;
            break;
        }
    }
    if (flag == true) {
        cout << "Symmetric array.";
    } else {
        cout << "Asymmetric array.";
    }
}