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
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;
        for (; i >= 0 && s[i] == ' '; i--);
        for (; i >= 0 && s[i] != ' '; i--) length++;
        return length;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    cout << sl.lengthOfLastWord("   fly me   to   the moon   ");

    cout << endl;
    return EXIT_SUCCESS;
}
