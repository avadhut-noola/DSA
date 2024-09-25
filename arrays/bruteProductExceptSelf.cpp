#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> ans (n, 1);

        for(int i=0; i<n; i++ ) {
            for (int j=0; j<n; j++ ) {

                if (i != j)
                    ans[i] *= nums[j];
            }
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
