#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& v) {

    int ans =0;
    for ( int val: v ) {
        ans ^= val;
    }
    return ans;

}

int main() {
    vector<int> v = {4,1,2,1,2};

    cout << "Unique Number: " << singleNumber(v);
    return 0;
}