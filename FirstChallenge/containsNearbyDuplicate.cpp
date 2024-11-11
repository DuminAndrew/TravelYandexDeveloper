#include <unordered_map>

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> indexMap;

        for (int i = 0; i < nums.size(); ++i) {
            if (indexMap.count(nums[i]) && i - indexMap[nums[i]] <= k) {
                return true;
            }
            indexMap[nums[i]] = i;
        }
        return false;
    }
};
