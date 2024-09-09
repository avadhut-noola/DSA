#include<iostream>
using namespace std;

int decToBinary (int decNum) {
    int ans =0, pow=1, rem;

    while (decNum>0) {
        rem = decNum %2;
        decNum /= 2;

        ans += ( rem * pow);
        pow *=10;
    }
    return ans; // binary form
}

int main() {
    int decimal, pow=1;
    //User choice
    cout << "Enter decimal no: ";
    cin>>decimal;
    cout << "Binary Conversion: " << decToBinary(decimal) << endl;


    cout << "1-10 binary numbers\n"; // 1-10 binary numbers:
    for (int i=1; i<=10; i++) {
        cout << decToBinary(i) << endl;
    }
    return 0;
}