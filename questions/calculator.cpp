#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first num -> ";
    cin >> a;
    cout << "\nEnter second num -> ";
    cin >> b;
    char ch;
    cout << "Enter any operation -> ";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << (a + b);
        break;
    case '-':
        cout << (a - b);
        break;
    case '*':
        cout << (a * b);
        break;
    case '/':
        cout << (a / b);
        break;
    case '%':
        cout << (a % b);
        break;
    default:
        cout << "Enter valid number.";
    }
    return 0;
}