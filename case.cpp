#include <iostream>
using namespace std;

int main() {
    cout << "Enter your char -> ";
    char ch;
    ch = cin.get();

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lower case!";
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "Upper case!";
    } else if (ch >= '0' && ch <= '9') {
        cout << "Numeric!";
    } else {
        cout << "You entered a special character!";
    }

    return 0;
}
