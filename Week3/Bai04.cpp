#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    const int MAX_N = 1001;
    int n;
    cin >> n;
    double a[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    double b;
    cin >> b;
    int j;
    for (j = 0; j < n; j++) {
        if (a[j] > b) {
            break;
        }
    }
    for (int k = n - 1; k >= j; k--) {
        a[k+1] = a[k];
    }
    a[j] = b;
    for (int k = 0; k <= n; k++) {
       cout << fixed << setprecision(2) << a[k] << " "; 
    }
}