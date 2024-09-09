#include <iostream>
using namespace std;

void printFibonacciSeries(int n) {
    // Handle edge cases
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return;
    }
    
    // Base cases
    if (n == 1) {
        cout << "0" << endl;
        return;
    }
    if (n == 2) {
        cout << "0 1" << endl;
        return;
    }
    
    // Variables to store the current and previous Fibonacci numbers
    int a = 0, b = 1, c;
    
    // Print the first two terms
    cout << a << " " << b << " ";
    
    // Print the rest of the series
    for (int i = 2; i < n; ++i) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int n;
    
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> n; // Input the number of terms
    
    printFibonacciSeries(n);
    
    return 0;
}
