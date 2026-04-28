//
//  main.cpp
//  leetcode
//
//  Created by Macbook on 4/19/26.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<long long> distance(vector<int>&nums) {
        long long size_of = nums.size();
        vector<long long> arr(size_of, 0);
        unordered_map<long long, long long> freq;
        unordered_map<long long, long long> sumIndexes;

        for (int i = 0; i < size_of; i++) {
            int value = nums[i];
            helperFunction(arr, freq, sumIndexes, value, i);
        }
        for(const auto& item : freq) {
            freq[item.first] = 0;
        }
        for(const auto& item : sumIndexes) {
            sumIndexes[item.first] = 0;
        }
        for (int i = (size_of - 1); i >= 0; i--) {
            int value = nums[i];
            helperFunction(arr, freq, sumIndexes, value, i);
        }
        return arr;
    }
    void helperFunction(vector<long long>&arr, unordered_map<long long, long long>&freq, unordered_map<long long, long long>&sumIndexes, int value, long long index) {
        if(!freq.count(value)){
            freq[value] = 0;
        }
        if(!sumIndexes.count(value)){
            sumIndexes[value] = 0;
        }
        arr[index] += abs((index*freq[value]) - sumIndexes[value]);
        freq[value]++;
        sumIndexes[value]+=index;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    vector<int>nums = {1,3,1,1,2};
    vector<long long> distances = sl.distance(nums);
    
    for (long long i:distances) {
        cout << i << " ";
    }
    cout << endl;
    return EXIT_SUCCESS;
}
