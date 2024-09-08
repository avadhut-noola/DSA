#include<iostream>
using namespace std;

int main() {
    
    int n, i, j;
    //input 'n' from user
    cout << "Enter value for n: ";
    cin >> n;

    cout << "Number Version: \n"; //Number
    for ( i=0; i<n; i++ ) {
        for ( j=i+1; j > 0; j--) { //Backward Loop
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "Number Version: \n"; //Number
    for ( i=0; i<n; i++ ) {
        char ch = 'A' + i;
        for ( j=i+1; j > 0; j--) { //Backward Loop
            cout << ch-- << " ";
        }
        cout << endl;
    } 
    return 0;
}