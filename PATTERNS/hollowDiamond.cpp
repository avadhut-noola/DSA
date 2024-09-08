#include<iostream>
using namespace std;

int main() {
    
    int n , i , j;
    cout << "Enter value of n: "; 
    cin >> n; //input n

    //Top
    for ( i=0; i<n; i++ ) {

        //Spaces
        for ( j=0; j<(n-i-1); j++) {
            cout << " ";
        }
        cout << '*';

        if ( i!=0 ) {
            for ( j=0; j< (2*i-1); j++) {
                cout << " ";
            }
            cout << '*';            
        }
        cout << endl;
    }

    
    //Bottom till n-1
    for ( i=0; i<n-1; i++ ) {

        //i+1 Spaces
        for ( j=0; j<(i+1); j++) {
            cout << " ";
        }
        cout << '*';

        if ( i!= (n-2) ) {
            for ( j=0; j<2*(n-i)-5; j++) {
                cout << " ";
            }
            cout << '*';            
        }
        cout << endl;
    }
    return 0;
}