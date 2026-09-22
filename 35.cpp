#include <vector>
#include <iostream>
#include <stdint.h>

typedef uint8_t reg;

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r){
            int m = (r + l) / 2;
            if (nums[m] == target){
                return m;
            }
            if (nums[m] > target){
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return l;
    }
};


int main(void){
    std::vector nums = std::vector<int>({1,3,5,6});
    Solution s;
    std::cout << s.searchInsert(nums, 0) << std::endl;
    return 0;
}