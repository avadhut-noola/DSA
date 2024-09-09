#include<iostream>
using namespace std;

bool primeNum (int n) {

    bool isPrime = true;

    for (int i=2; i*i <= n; i++) {
        if ( n % i == 0 ) {
            return false;
        }       
    }
    return true;
}

void prime2_to_N(int n) {
    cout << "All prime numbers till " << n << ": ";

    for (int i = 2; i <= n; i++) {
        if (primeNum(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}


int main() {
    //Input n
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (primeNum(n)) {
        cout << "Input is a prime number" << endl;
    } else {
        cout << "Input is not a prime number" << endl;
    }
    
    prime2_to_N(n); 
    return 0;
}