#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;
    for (int i = 0; i <= sqrt(upperBound) ; i++) {
        if (i >= sqrt(lowerBound)) {
            cout << i*i << " ";
        }
    }
}