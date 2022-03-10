#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    const int MAX_N = 1000;
    int n;
    cin >> n;
    double vectorA[MAX_N];
    double vectorB[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> vectorA[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> vectorB[j];
    }
    double product = 0;
    for (int k = 0; k < n; k++) {
        product += vectorA[k] * vectorB[k];
    }
    cout << fixed << setprecision(2) << product;
}