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
    string useXOR(string a, string b) {
        int x = 0;
        string res = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        
        for (; i >= 0 || j >= 0; i--, j--) {
            int digitA = i >= 0 ? a[i] - '0' : 0;
            int digitB = j >= 0 ? b[j] - '0' : 0;
            if (x) {
                res = char(!(digitA ^ digitB) + '0') + res;
                x = digitA | digitB;
            }
            else {
                res= char((digitA ^ digitB) + '0') + res;
                x = digitA & digitB;
            }
        }
        if (x) {
            res = "1" + res;
        }
        return res;
    }
    string useTernaryOpr(string a, string b) {
        char x = '0';
        string res = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        
        for (; i >= 0 || j >= 0; i--, j--) {
            char digitA = i >= 0 ? a[i] : '0';
            char digitB = j >= 0 ? b[j] : '0';
            if (x == '1') {
                res = (digitA == digitB ? "1" : "0") + res;
                x = digitA == '1' || digitB == '1' ? '1': '0';
            }
            else {
                res = (digitA != digitB ? "1" : "0") + res;
                x = digitA == '1' && digitB == '1' ? '1' : '0';
            }
        }
        if (x == '1') {
            res = "1" + res;
        }
        
        return res;
    }
    string addBinary(string a, string b) {
        return useTernaryOpr(a, b);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    string res = sl.addBinary("1", "1010");

    cout << res << endl;
    return EXIT_SUCCESS;
}
