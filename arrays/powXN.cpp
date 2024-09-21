#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {

        //Corner cases
        if(n == 0) return 1.0; //X power to 0 =1
        if(x == 0) return 0; // 0 to power n =0        
        if(x == 1) return 1; // 1 to power n = 1
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 == 1) return -1.0;
        
        long binForm = n;
        double ans = 1; 

        if(n < 0) { //Negative power
            x = 1/x;
            binForm = -binForm;
        } 

        while (binForm > 0) { //Binary Exponentiation
            if (binForm % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binForm /= 2;            
        }

        return ans;
    }
};

int main () {
    Solution sol;
    double x; 
    int n;
    cout << "Enter the value for X: "; 
    cin >> x;

    cout << "Enter the value for N: "; 
    cin >> n;

    cout << "Power = " << sol.myPow(x,n);

    return 0;
}