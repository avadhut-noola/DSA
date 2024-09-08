#include<iostream>
using namespace std;

int main() {
    
    int i , j , n;
    //input from user
    cout << "Enter value for n: ";
    cin >> n;

    //Stars Version
    cout << "Stars Traingle: \n"; 
    for ( i = 0; i < n; i++) { //runs till n
        for ( j = 0; j < i+1; j++ ) { //runs till i+1
            cout << '*' << " " ;
        }
        cout << endl;
    }

    //Numbers Version
    cout << "Numbers Traingle: \n"; //Numbers Version
    for ( i = 0; i < n; i++) {
        for (j = 0; j < i+1; j++ ) {
            cout << (i+1) << " " ; 
        }
        cout << endl;
    }

    //Character Version- HomeWork
    char ch = 'A';
    cout << "Character Triangle: \n";
    for ( i=0; i<n; i++) {
        for ( j=0; j< i+1; j++) {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }
    
    //Reset 1 to every line
    cout << "Version 4 Triangle: \n";
    for ( i=0; i<n; i++ ) {
        for ( j=1; j <= (i+1); j++ ) {
            cout << j << " ";
        }
        cout << endl;
    }    
    return 0;
}