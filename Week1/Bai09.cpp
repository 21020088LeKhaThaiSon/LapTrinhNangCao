#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
    int a,b,c;
    cin >> a >> b >> c;
    if (a + b <= c || b + c <= a || c + a <= b) {
        cout << "invalid";
        return 0;
    }
    double p = (a+b+c)/2.0;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(2) << s;
}