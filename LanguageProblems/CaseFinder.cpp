#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Character: ";
    cin >> ch;

    //Using character
    // if( ch >= 'a' && ch <= 'z' ) {
    //     cout << "Lowercase Character\n";
    // } else {
    //     cout << "Uppercase Character";
    // }

    //Using ASCII value
    if( ch >= 65 && ch <= 90 ) {
        cout << "Uppercase Character\n";
    } else {
        cout << "Lowercase Character";
    }
    return 0;
}       