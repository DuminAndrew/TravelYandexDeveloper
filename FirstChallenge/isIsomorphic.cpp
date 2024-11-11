#include <unordered_map>

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, char> mapST;
        std::unordered_map<char, char> mapTS;

        for (int i = 0; i < s.length(); ++i) {
            char charS = s[i];
            char charT = t[i];

            if (mapST.count(charS) && mapST[charS] != charT) {
                return false;
            }
            if (mapTS.count(charT) && mapTS[charT] != charS) {
                return false;
            }

            mapST[charS] = charT;
            mapTS[charT] = charS;
        }

        return true;
    }
};
