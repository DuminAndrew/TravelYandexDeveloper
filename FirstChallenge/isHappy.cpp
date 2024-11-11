#include <unordered_set>

class Solution {
public:
    bool isHappy(int n) {
        std::unordered_set<int> seen;
        
        while (n != 1) {
            if (seen.count(n)) {
                return false;
            }
            seen.insert(n);
            n = getNext(n);
        }
        return true;
    }
    
private:
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;
            totalSum += digit * digit;
            n /= 10;
        }
        return totalSum;
    }
};
