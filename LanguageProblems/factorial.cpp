#include<iostream>
using namespace std;

int main() {
    int n , i, fact=1;

    //Input the value
    cout<<"Enter the number: " ;
    cin>>n;
    
    //For Loop
    for ( i=2; i <= n; i++ ) {
        fact*=i;
    }

    //Printing the result
    cout << "Factorial of input no: " << fact <<endl;
    return 0;
}