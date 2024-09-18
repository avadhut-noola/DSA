#include<iostream>
#include<vector>
using namespace std;

int kadanes (vector<int>& nums) {
    int currSum = 0, maxSum =INT32_MIN;

    for (int val : nums ) {
        currSum += val;
        maxSum = max ( currSum, maxSum );

        //Kadane's optimization
        if( currSum < 0) currSum =0;
    }
    return maxSum;    
}
int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4}; 

    cout << "Maximum Sub array sum: " <<  kadanes(nums);
    return 0;
}