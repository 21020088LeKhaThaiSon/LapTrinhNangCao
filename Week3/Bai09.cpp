#include <iostream>
#include <string>
using namespace std;
int main () {
    string text;
    getline (cin, text);
    int countStartSpaces = 0;
    int i = 0;
    while (text[i] == ' ') {
        countStartSpaces++;
        i++;
    }
    if (countStartSpaces > 0) {
        for (int j = 1; j <= countStartSpaces; j++) {
            cout << " ";
        }   
    }
    for (int k = countStartSpaces; k < text.size(); k++) {
        if (text[k] != ' ') {
            cout << text[k];
        } else {
            cout << " ";
            while (text[k] == ' ' && text[k+1] == ' ') {
                k++;
            }
        }
    }
}