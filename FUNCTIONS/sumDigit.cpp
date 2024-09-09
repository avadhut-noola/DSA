#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    int lastDigi, digitSum=0;

    while (n > 0) {
        lastDigi = n % 10;
        n = n / 10;

        digitSum += lastDigi;
    }

    return digitSum;
}

int main() {
    //Input from user
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of digits of number= " << sumOfDigits(n);

    return 0;
}