#include<iostream>
using namespace std;

int main() {
    int i , j , n;
    
    //Input n
    cout << "Enter value for n: " ;
    cin>> n;

    //Number Version
    for (i=0; i<n; i++) {
        
        for ( j=0; j < i; j++) { //outerLoop
            cout << " "; //Loop0 prints 'i' spaces
        }

        for ( j=0; j<(n-i); j++) {
            cout << (i+1); //Loop1 prints numbers
        }
        cout << endl;
    }

    char ch = 'A';
    cout << "Character Version: \n"; //Character Version
    for (i=0; i<n; i++) {
        
        for ( j=0; j < i; j++) { //outerLoop
            cout << " "; //Loop0 prints 'i' spaces
        }

        for ( j=0; j<(n-i); j++) {
            cout << ch; //Loop1 prints numbers
        }
        cout << endl;
        ch++; 
    }
    return 0;
}