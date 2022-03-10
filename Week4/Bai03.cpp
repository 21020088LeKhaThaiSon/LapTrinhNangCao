void printArrow(int n, bool left) {
    if (left == 0) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                cout << "  ";
            }
            for (int k = 1; k <= n - i + 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n - i; j++) {
                cout << "  ";
            }
            for (int k = 1; k <= i + 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            for (int k = 1; k <= n - i + 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << " ";
            }
            for (int k = 1; k <= i + 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}