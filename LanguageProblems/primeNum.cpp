#include<iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    //Input the number
    cout<<"Enter the number: ";
    cin>>n;
    
    //Optimized solution; only runs till root of n
    for (int i=2; i*i <= n; i++) {
        if( n % i == 0 ) {
            isPrime = false;
            break;
        }
    }

    //Printing the result
    if (isPrime == true) {
        cout << "Input is a prime number";
    } else {
        cout << "Input is not a prime number";
    }
    return 0;
}