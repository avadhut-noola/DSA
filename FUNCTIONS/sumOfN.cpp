#include<iostream>
using namespace std;

int sumOfNumbers(int n) {
    int sum=0;
    for (int i=1; i<=n; i++) {
        sum+=i;
    }
    return sum;
}

int main() {
    
    cout << "Sum of numbers= " << sumOfNumbers(5);
    return 0;
}