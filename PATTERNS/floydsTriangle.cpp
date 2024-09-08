#include<iostream>
using namespace std;

int main() {  
    int n, num=1, i, j;
    //input from user
    cout << "Enter value for n: ";
    cin >> n;

    cout << "Number Version: \n" ; //Number
    for ( i=0; i<n; i++ ) {
        for ( j=(i+1); j>0; j--) { //Backward Loop
            cout << num++ << " ";
        } 
        cout <<endl;
    }

    char ch = 'A';
    cout << "Character Version: \n"; //Character-HomeWork
    for ( i=0; i<n; i++ ) {
        for ( j= (i+1); j>0; j--) {
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}