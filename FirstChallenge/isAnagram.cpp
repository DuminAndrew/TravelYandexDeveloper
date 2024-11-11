#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> countMap;

        for (char c : s) {
            countMap[c]++;
        }

        for (char c : t) {
            if (countMap[c] == 0) {
                return false;
            }
            countMap[c]--;
        }

        return true;
    }
};
