#include<iostream>
using namespace std;

int main() {
    
    int n , oddSum=0 , i=1;
    //Input the desired value from user
    cout<<"Enter the number:";
    cin>>n;


    // //For Loop for calculating Sum of numbers
    // for(int i=1; i<=n; i++) {
    //     if ( i%2 != 0 ){
    //         oddSum += i;
    //     }
    // }
    
    // While Loop for Calculating Sum of numbers
    while(i <= n) {
        if ( i%2 != 0 ) { //Condition will check the odd no.
            oddSum += i;
        }
        i++;
    }

    //Printing final result
    cout << "Sum of numbers = " << oddSum << endl;
    return 0;
}