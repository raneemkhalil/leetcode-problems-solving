//
//  main.cpp
//  leetcode
//
//  Created by Macbook on 4/19/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            int elem = nums[i];
            if (elem != nums[k-1]) {
                nums[k] = elem;
                k++;
            }
        }
        return k;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << sl.removeDuplicates(nums) << endl;
    for (int elem:nums) {
        cout<<elem<<", ";
    }
    cout << endl;
    return EXIT_SUCCESS;
}
