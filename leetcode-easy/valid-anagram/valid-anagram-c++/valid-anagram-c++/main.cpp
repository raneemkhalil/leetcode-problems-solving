//
//  main.cpp
//  valid-anagram
//
//  Created by Macbook on 4/19/26.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        string temp = "";
        
        if (s.length() != t.length()) {
            return false;
        }

        // seperate letters
        for (int i = 0; i < s.length(); i++) {
            if (temp.find(s[i]) >= 0) {
                temp += s[i];
            }
        }

        // init numbs of occurance of each letter
        int *nums_s = new int[temp.length()];
        int *nums_t = new int[temp.length()];

        for (int i = 0; i < temp.length(); i++) {
            nums_s[i] = 0;
            nums_t[i] = 0;
        }
        
        // increase the count if each letter when accurate
        for (int i = 0; i < s.length(); i++) {
            int index = temp.find(s[i]);
            if (index >= 0) {
                nums_s[index]++;
            }
        }
        
        for (int i = 0; i < t.length(); i++) {
            int index = temp.find(t[i]);
            if (index >= 0) {
                nums_t[index]++;
            }
            else {
                return false;
            }
        }
        
        for (int i = 0; i < temp.size(); i++) {
            if (nums_s[i] != nums_t[i]) {
                return false;
            }
        }
        return true;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    string s = "anagram", t = "nagaram";
    Solution sl;
    bool anagram = sl.isAnagram(s, t);
    
    cout << anagram << endl;
    
    return EXIT_SUCCESS;
}
