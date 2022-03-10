#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    const int MAX_N = 1000;
    int n;
    cin >> n;
    double arrayX[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> arrayX[i];
    }
    for (int j = n - 1; j >= 0; j--) {
        cout << fixed << setprecision(2) << arrayX[j] << " ";
    }
}