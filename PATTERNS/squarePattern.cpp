#include<iostream>
using namespace std;

int main() {
    
    int n, num = 1, i, j;

    //Input 'n' from user
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Number Pattern:\n";    //Numbers
    for (  i = 1; i <= n; i++ ) { // outerLoop
        for (  j = 1; j <= n; j++ ) { //innerLoop
            cout << j << " ";
        } 
        cout << endl;
    }

    cout << "Star Pattern:\n"; //Star Pattern
    for (  i = 0; i < n; i++ ) { 
        for (  j = 0; j < n; j++ ) { 
            cout << "* ";
        } 
        cout << endl;
    }

    cout << "Characters Pattern:\n"; //Characters Pattern
    for (  i = 0; i < n; i++ ) { 
        char ch = 'A';
        for (  j = 0; j < n; j++ ) { 
            cout << ch++ << " ";
        } 
        cout << endl;
    }

    cout << "Number Version 2: \n"; //Number Version 2
    for ( i = 0; i < n; i++) { 
        for ( j = 0; j < n; j++ ) {
            cout << num++ << " " ;
        }
        cout << endl;
    } 
    cout << "After pattern num= " << num << endl;

    char ch = 'A'; //Homework Problem
    cout << "Character Version 2: \n"; //Char Version 2
    for ( i=0; i<n; i++ ) { 
        for ( j=0; j<n; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}