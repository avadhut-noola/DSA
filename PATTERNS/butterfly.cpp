#include<iostream>
using namespace std;

int main() {
    
    int n, i, j;
    cout << "Enter value for n: ";
    cin >> n; // Input n
    
    //Top
    for ( i=0; i<n; i++) {

        //starSet1
        for ( j=0; j<(i+1); j++) {
            cout << '*';
        }

        //spaces
        for ( j=0; j < 2* (n-i-1); j++) {
            cout << " "; //Loop0 prints '2*(n-i-1)= even spaces
        }

        //starSet2
        for ( j=0; j<(i+1); j++) {
            cout << '*';
        }
        cout << endl; 
    }

    //Bottom
    for ( i=0; i<n; i++) {

        //starSet1
        for ( j=i; j<(n); j++) {
            cout << '*';
        }

        if(i!=0) {
            //spaces
            for ( j=0; j < 2*i; j++) {
            cout << " "; //Loop0 prints 2*i spaces
        }
        }

        //starSet2
        for ( j=i; j<n; j++) {
            cout << '*';
        }
        cout << endl; 
    }    
    return 0;
}
