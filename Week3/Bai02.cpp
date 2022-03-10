#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    const int MAX_N = 1000;
    int n;
    cin >> n;
    double a[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    double temp;
    int k;
    for (int j = 0; j < n - 1; j++) {
        for (k = j + 1; k < n; k++) {
            if (a[k] > a[j]) {
                temp = a[k];
                a[k] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int m = 0; m < n; m++) {
        cout << fixed << setprecision(2) << a[m] << " ";
    }
}