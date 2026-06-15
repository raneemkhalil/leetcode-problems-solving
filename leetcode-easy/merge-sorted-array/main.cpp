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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = 0;
        int fullSize = n + m;
        int right = m - 1;

        if(nums1.empty()) {
            nums1 = nums2;
            return;
        }
        
        for (int i = 0; i < nums2.size();) {
            int val = nums2[i];
            
            int midIndex = left + (right - left) / 2;
            int midValue = nums1[midIndex];

            if (val >= midValue) {
                left = midIndex + 1;
            }
            else {
                right = midIndex - 1;
            }

            if (right < left && !nums1[fullSize - 1]) {
                nums1.pop_back();
            }
            if(nums1.empty()) {
                nums1 = nums2;
                return;
            }
            if(right < left) {
                nums1.insert(nums1.begin() + right + 1, val);
                i++;
                right = m++;
            }

        }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    vector<int> nums1 = {0,0,0,0,0};
    vector<int> nums2 = {1,2,3,4,5};
    sl.merge(nums1, 0, nums2, 5);
    for (int num:nums1) {
        cout << num << ", ";
    }
    cout << endl;
    return EXIT_SUCCESS;
}
