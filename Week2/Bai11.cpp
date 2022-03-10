#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    const int MAX_N = 1000;
    int n;
    cin >> n;
    double arrayX[MAX_N];
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arrayX[i];
        sum += arrayX[i];
    }
    double mean = sum / n;
    double result = 0;
    for (int j = 0 ; j < n; j++) {
        result += (arrayX[j] - mean) * (arrayX[j] - mean);
    }
    cout << fixed << setprecision(2) << result / n;
}