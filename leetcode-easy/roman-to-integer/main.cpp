class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanIntMapping = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            int j = i + 1;
            int result0;
            if (!romanIntMapping.count(s[i])) {
                return 0;
            }
            int num = romanIntMapping[s[i]];
            int num2 = j < s.length() ? romanIntMapping[s[j]] : 0;

            if (num >= num2) {
                result+=num;
                continue;
            }
            else {
                result0 = num2 - num;
                i++;
            }
            if (result < result0) {
                result = result0 - result;
            }
            else {
                result += result0;
            }
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    cout << sl.romanToInt("MCMXCIV");
    cout << endl;
    return EXIT_SUCCESS;
}