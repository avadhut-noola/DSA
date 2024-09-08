#include<iostream>
using namespace std;
int main() {
    int n , i, j;
    //Input n
    cout << "Enter value of n: "; 
    cin >> n;

    //Number Version
    for (i=0; i<n; i++) {
        
        //Loop0 prints 'n-i-1' spaces
        for ( j=0; j <n-i-1; j++) { 
            cout << " ";
        }

        //Loop1 prints numbers1
        for ( j=1; j<=i+1; j++) {
            cout << j; 
        }

        //Loop2 prints numbersSet2
        for ( j=i; j>0; j--) { //Backward loop
            cout << j; 
        }        
        cout << endl;
    }
    return 0;
}