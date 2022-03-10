#include <iostream>
using namespace std;
int main () {
    int n,temp;
    cin >> n;
    for (int x = 1; x <= 2*n + 1; x++) {
        for (int y = 1; y <= 2*n + 1; y++) {
           temp = x;
           if (x >= n + 2) {
               if (y >= temp - n && y <= 3*n + 2 - temp) {
                   cout << "* ";
               } else {
                   cout << ". ";
               }
           } else  {
                if (y >= n + 2 - temp && y <= n + temp) {
               cout << "* ";
                } else {
               cout << ". ";
                }
            }
        }
        cout << endl;
    }
}