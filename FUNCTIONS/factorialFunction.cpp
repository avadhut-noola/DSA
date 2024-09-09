#include<iostream>
using namespace std;

int factorialN(int n) {
    int fact =1;

    for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
}

int main() {
    
    cout << "Factorial of 4: " << factorialN(4) <<endl;
    cout << "Factorial of 5: " << factorialN(5) <<endl;
    return 0;
}