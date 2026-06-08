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
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        int a = 2, b = 1;
        for (int i = 3; i <= n; i++) {
            int c = a + b;
            b = a;
            a = c;
        }
        return a;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    int ways = sl.climbStairs(6);

    cout << ways << endl;
    return EXIT_SUCCESS;
}
