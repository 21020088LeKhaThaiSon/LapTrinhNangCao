#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int x;
    cin >> x;
    double exponent = 1;
    double product = 1;
    double sum = 1;
    double oldSum = 0;
    int i = 1;
    while (sum - oldSum > 0.001) {
        product *= i;
        exponent *= x;
        oldSum = sum;
        sum += exponent/product;
        i++;
    }
    cout << fixed << setprecision(4) << sum;
}