#include<iostream>
using namespace std;

int main() {
    int n, i=1 , sum=0;

    //Input the desired value
    cout << "Enter a number:";
    cin >> n;

    //For Loop
    // for( int i=1; i<=n; i++ ) {
    //     if( i % 3 == 0) { //Checks the no. is divisible by 3
    //         sum += i;
    //     }
    // }

    //While Loop
    while ( i <=n ) {
        if ( i % 3 == 0) {
            sum += i;
        }
        i++;
    }

    cout << "Sum of Numbers divisible by 3: " << sum;  
    return 0;
}