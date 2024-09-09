#include<iostream>
using namespace std;

int factorialN(int n) {
    int fact =1;

    for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
}

int nCr ( int n, int r ) { 
    int factN= factorialN(n);
    int factR= factorialN(r);

    int factNMR= factorialN(n-r);

    return factN/ (factR * factNMR) ;
}

int main() {
    //Input from user
    int n,r;
    cout << "Enter a value for n: ";
    cin >> n;
    cout << "Enter a value for r: ";
    cin >> r;

    cout<< "Binomial Coefficient of N & R:  " << nCr(n, r);

    return 0;
}