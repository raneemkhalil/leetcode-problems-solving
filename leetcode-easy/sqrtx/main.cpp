//
//  main.cpp
//  leetcode
//
//  Created by Macbook on 4/19/26.
//

#include <iostream>

using namespace std;


class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        long long res = 0;
        int y = 0;
        while(res < x) {
            y++;
            res = (long long)y * (long long)y;
        }
        if (res == x) {
            return y;
        } else {
            return y - 1;
        }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    int res = sl.mySqrt(25);

    cout << res << endl;
    return EXIT_SUCCESS;
}
