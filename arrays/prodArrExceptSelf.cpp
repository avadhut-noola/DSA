#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    // O(n) complexity
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans (n, 1);

        //prefix => ans
        for(int i=1; i<n; i++ ) {
                ans[i] = ans[i-1] * nums[i-1] ;
        }  
         
        int suffix = 1;         
        //suffix => ans
        for (int i=n-2; i>=0; i-- ) {
                suffix *= nums[i+1];
                ans[i] *= suffix;
        }
        
        return ans;
    }
};

int main() {
    vector<int> nums = {1,2,3,4};
    Solution sol;
    
    vector<int> result = sol.productExceptSelf(nums);
    
    cout << "Products Except Self (Index): \n[ ";

    for (int i=0; i<nums.size(); i++) {
        cout << result[i] << " ";

    } cout << "]";

    return 0;
}
