#include <iostream>
using namespace std;
int main () {
    int total, totalLegs;
    cin >> total >> totalLegs;
    bool flag = false;
    for (int numChicken = 0; numChicken <= total; numChicken++) {
        if (numChicken*2+(total-numChicken)*4 == totalLegs) {
            cout << "chicken = " << numChicken << ", dog = " << total-numChicken;
            flag = true;
            break;
        }
    }
    if (flag == false) {
        cout << "invalid";
    }
}